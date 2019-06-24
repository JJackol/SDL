#include "MainProgram.h"
#include "src/InitError.h"
#include <iostream>

MainProgram::MainProgram(int w_width, int w_height, Uint32 flags ):w_width{w_width}, w_height{w_height}
{

    if ( SDL_Init( flags ) != 0 )
        throw InitError();

    if ( SDL_CreateWindowAndRenderer( w_width, w_height, SDL_WINDOW_SHOWN,
                                      &m_window, &m_renderer ) != 0 )
        throw InitError();
	if ( timer.init_timer() )
		throw InitError("timer_error");

	display.set_window(m_window);
	display.set_renderer(m_renderer);
}


//
// Exit
//
MainProgram::~MainProgram()
{
    SDL_DestroyWindow( m_window );
    SDL_DestroyRenderer( m_renderer );
    SDL_Quit();
}

	void MainProgram::main_loop()
	{
		// Clear the window with a black background
		SDL_SetRenderDrawColor( m_renderer, 0, 0, 0, 255 );
		SDL_RenderClear( m_renderer );

		// Show the window
		SDL_RenderPresent( m_renderer );

		LogicInputState logic_input;
		GameState game_state;
		SDL_Event event;

		while(!done)
		{
			while ( SDL_PollEvent(&event) )
			{
				handle_event(event);

			}
			if( logic_update_flag )
			{
				logic_input = in_control.update(in_event_q);
				logic.update(logic_input, game_state);
				logic_update_flag = false;
			}
			if( display_update_flag )
			{
				logic_input = in_control.update(in_event_q);
				display.update(logic);
				display_update_flag = false;
			}

		}


	}


    void MainProgram::handle_event(SDL_Event &event)
    {
			if( event.type == SDL_KEYDOWN )
				in_event_q.push(event);
			else if( event.type == SDL_KEYUP )
				in_event_q.push(event);
			else if( event.type == SDL_MOUSEMOTION)
				in_event_q.push(event);
			else if( event.type == SDL_MOUSEBUTTONDOWN)
				in_event_q.push(event);
			else if( event.type == SDL_USEREVENT )
				switch (event.user.code)
				{
					case TICKS:
						std::cout<<logic.get_delta()<<std::endl;
						logic_update_flag = true;
						break;
					case FPS:
						std::cout<<"dispaly"<<std::endl;
						display_update_flag = true;
						break;


				}
			else if( event.type == SDL_QUIT )
				done = true;
	}
