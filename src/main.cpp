#include <iostream>
#include <string>
#include <stdlib.h>
#include <ncurses.h>
#include "Ball.h"
#include "Brick.h"
#include "Paddle.h"
#include "Player.h"

// initialise globals
char wall_texture = '*';
int height = 50;
int width = 60;  // width wider as less there's less horizontal spacing
bool quit = false;

// function declarations
void setup();
void draw();

int main() 
{
	setup();

	while(!quit) {
		draw();
	}
			
	return 0;
}

void setup()
{
	// init ncurses
	initscr();
	cbreak();
	noecho();
	curs_set(0);
	keypad(stdscr, TRUE);
}

void draw()
{
	// draw frame
	erase();

	for(int i = 0; i < width; i++) {
		mvaddch(0, i, wall_texture);
		mvaddch(height - 1, i, wall_texture);
	}

	for(int i = 1; i < height - 1; i++) {
		mvaddch(i, 0, wall_texture);
		mvaddch(i, width - 1, wall_texture);
	}

	refresh();
}
