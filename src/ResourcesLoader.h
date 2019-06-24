#ifndef RESOURCESLOADER_H
#define RESOURCESLOADER_H
#include <SDL.h>
#include <string>


class ResourcesLoader
{
	SDL_Window * m_window;
    SDL_Renderer * m_renderer;
	public:
		ResourcesLoader();
		virtual ~ResourcesLoader();
		SDL_Texture* loadTexture( std::string path );
	protected:

	private:
};

#endif // RESOURCESLOADER_H
