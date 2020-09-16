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
// function declarations

int main() {
	
	initscr();
	cbreak();
	noecho();
	curs_set(0);
	keypad(stdscr, TRUE);
	timeout(50);
	while(1){
	erase();
	refresh();
	mvaddch(0,1, wall_texture);
}
	return 0;
}

