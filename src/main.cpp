#include <iostream>
#include <string>
#include <stdlib.h>
#include <ncurses.h>
#include "Ball.h"
#include "Brick.h"
#include "Paddle.h"
#include "Player.h"

// initialise globals
char wall_texture = '=';
int height = 80;
int width = 24;

// function declarations

int main() 
{
	
	initscr();
	cbreak();
	noecho();
	curs_set(0);
	keypad(stdscr, TRUE);
	timeout(50);

	erase();
	refresh();

	for(int i = 0; i < width; i++) {

	mvaddch(0,1, wall_texture);

	return 0;
}

