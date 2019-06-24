#include "MainProgram.h"
#include "src/InitError.h"
#include <iostream>

MainProgram::MainProgram(int w_width, int w_height, Uint32 flags )
{
    if ( SDL_Init( flags ) != 0 )
        throw InitError();

    if ( SDL_CreateWindowAndRenderer( w_width, w_height, SDL_WINDOW_SHOWN,
                                      &m_window, &m_renderer ) != 0 )
        throw InitError();
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
    SDL_Event event;
    bool done = false;
    while(!done)
	{
		while ( SDL_PollEvent(&event) )
		{
			handle_event(event);
//			if( event.type == SDL_KeyboardEvent )
//				in_event_q.push(event);
//			if( event.type == SDL_MouseButtonEvent )
//				in_event_q.push(event);
//			if( event.type == SDL_Mou )
//				in_event_q.push(event);
		}
		logic_input = in_control.update(in_event_q);
		logic.update(logic_input);
		display.update();

		SDL_Delay( 500 );
	}

//    int rgb[] = { 203, 203, 203, // Gray
//                  254, 254,  31, // Yellow
//                    0, 255, 255, // Cyan
//                    0, 254,  30, // Green
//                  255,  16, 253, // Magenta
//                  253,   3,   2, // Red
//                   18,  14, 252, // Blue
//                    0,   0,   0  // Black
//                };
//
//    SDL_Rect colorBar;
//    colorBar.x = 0; colorBar.y = 0; colorBar.w = 30; colorBar.h = 480;
//
//    // Render a new color bar every 0.5 seconds
//    for ( int i = 0; i != sizeof rgb / sizeof *rgb; i += 3, colorBar.x += 90 )
//    {
//        SDL_SetRenderDrawColor( m_renderer, rgb[i], rgb[i + 1], rgb[i + 2], 255 );
//        SDL_RenderFillRect( m_renderer, &colorBar );
//        SDL_RenderPresent( m_renderer );
//        SDL_Delay( 500 );
//    }
	SDL_Delay( 5000 );
}


    void MainProgram::handle_event(SDL_Event &event)
    {
			if( event.type == SDL_KEYDOWN )
				in_event_q.push(event);
			if( event.type == SDL_KEYUP )
				in_event_q.push(event);
			if( event.type == SDL_MOUSEMOTION)
				in_event_q.push(event);
			if( event.type == SDL_MOUSEBUTTONDOWN)
				in_event_q.push(event);
	}
