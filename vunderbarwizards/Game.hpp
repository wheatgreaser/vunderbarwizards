#ifndef Game_hpp
#define Game_hpp

#include "SDL.h"
#include <stdio.h>
#include <iostream>

class Game {
public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen); //creating the window
	void handleEvents();
	void update(); //update changes to gameobjects
	void render(); //display/render things on the window we created
	void clean();//memory management; clearing the gameobjects from memory once they're rendered
	bool running() { return isRunning; } // true if the game is running 


private:
	bool isRunning;
	SDL_Window *window;
	SDL_Renderer* renderer;

};
#endif /* Game_hpp */
