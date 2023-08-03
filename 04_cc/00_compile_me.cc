#include <iostream>
#include "SDL.h"
#include "SDL_image.h"

int main(int argc, char* argv[]) {
	if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) < 0) {
		std::cout << "Error SDL2 Initialization : " << SDL_GetError();
		return 1;
	}
		
	if (IMG_Init(IMG_INIT_PNG) == 0) {
		std::cout << "Error SDL2_image Initialization";
		return 2;
	}

	SDL_Window* window = SDL_CreateWindow("First program", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_OPENGL);
	if (window == NULL) {
		std::cout << "Error window creation";
		return 3;
	}

	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (renderer == NULL) {
		std::cout << "Error renderer creation";
		return 4;
	}

	SDL_Surface* lettuce_sur = IMG_Load("dot.bmp");
	if (lettuce_sur == NULL) {
		std::cout << "Error loading image: " << IMG_GetError();
		return 5;
	}

	SDL_Texture* lettuce_tex = SDL_CreateTextureFromSurface(renderer, lettuce_sur);
	if (lettuce_tex == NULL) {
		std::cout << "Error creating texture";
		return 6;
	}

	SDL_FreeSurface(lettuce_sur);

	while (true) {
		SDL_Event e;
		if (SDL_PollEvent(&e)) {
			if (e.type == SDL_QUIT) {
				break;
			}
		}

		SDL_RenderClear(renderer);
		SDL_RenderCopy(renderer, lettuce_tex, NULL, NULL);
		SDL_RenderPresent(renderer);

		SDL_Delay(500); // Delay loop
	}

	SDL_DestroyTexture(lettuce_tex);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	IMG_Quit();
	SDL_Quit();

	return 0;
}
