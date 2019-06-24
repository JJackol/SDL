#include <exception>
#include <string>
#include <iostream>
#include <SDL.h>
#include "src/InitError.h"
#include "src/MainProgram.h"



//
//Game Instance
//


int main( int argc, char * argv[] )
{
    try
    {
        MainProgram main_program(800, 600, SDL_INIT_VIDEO | SDL_INIT_TIMER );
        main_program.main_loop();

        return 0;
    }
    catch ( const InitError & err )
    {
        std::cerr << "Error while initializing SDL:  "
                  << err.what()
                  << std::endl;
    }

    return 1;
}
