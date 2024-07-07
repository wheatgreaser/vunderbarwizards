#include "SDL.h"
#undef main

int main() {
		SDL_Init(SDL_INIT_EVERYTHING); //initializes the subsystems
		SDL_Window* window = SDL_CreateWindow("coolFuckingWindow", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN); // name, position_x, position_y, size width, size height, uint32 flags
		SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0); //window, index, flags
		SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255); //renderer, r, g, b, alpha
		SDL_RenderClear(renderer); //clears the display
		SDL_RenderPresent(renderer); //display the rendered scene (in this case the window)
		SDL_Delay(10000); 




	return 0;
}
