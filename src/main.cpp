#include <iostream>
#include <string>
#include <stdlib.h>
#include <ncurses.h>
#include "Ball.h"
#include "Brick.h"
#include "Paddle.h"
#include "Player.h"

// initialise globals
const char wall_texture = '*';
const char paddle_texture = '-';
const char ball_texture = 'o';
const char brick_texture = '=';
const int height = 50;
const int width = 60;  // width wider as less there's less horizontal spacing
const int layers = 8;
const int wall_shift = 10;
bool quit = false;
int ch;
int dir;
Brick wall[layers][width];

Player player;
Paddle paddle((width / 2) - 4, height - 2, 8, 2);
Ball ball(width / 2, height - 5, 1);

// function declarations
void setup();
void input();
void logic();
void draw();

int main() 
{
	setup();
	
	while(!quit) {
		input();
		logic();
		draw();
	}

	endwin();			
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
	timeout(50);

	// populate wall
	for(int i = 0; i < layers; i++) {
		for(int j = 1; j < width - 1; j++) {
			wall[i][j].set_x(j);
			wall[i][j].set_y(i + (height / wall_shift));
			wall[i][j].set_alive(true);
			switch (i) {
				case 0:
					wall[i][j].set_score(7);
					break;
				case 1:
					wall[i][j].set_score(7);
					break;
				case 2:
					wall[i][j].set_score(5);
					break;
				case 3:
					wall[i][j].set_score(5);
					break;
				case 4:
					wall[i][j].set_score(3);
					break;
				case 5:
					wall[i][j].set_score(3);
					break;
				case 6:
					wall[i][j].set_score(1);
					break;
				case 7:
					wall[i][j].set_score(1);
					break;
			}
		}
	}

	// set ball in motion




}

void input()
{
	ch = getch();
	switch(ch) {
		case KEY_RIGHT:
			if(paddle.get_x() + (paddle.get_width()) < width) {
				paddle.set_x(paddle.get_x() + paddle.get_speed());
			}
			break;
		case KEY_LEFT:
			if(paddle.get_x() > 0) {
				paddle.set_x(paddle.get_x() - paddle.get_speed());
			}
			break;
		case ' ':
			dir = 1;
			break;
		case 'q':
			quit = true;
			break;
		default:
			break;
	}
}

void logic()
{
	/* Ball directions
	0 - stationary
	1 - down
	2 - up
	3 - up left
	4 - up right
	5 - down left
	6 - down right
	*/

	// paddle hit
	if(ball.get_y() == paddle.get_y() || ball.get_y() == paddle.get_y()) {
		if(ball.get_x() >= paddle.get_x() && ball.get_x() <= paddle.get_x() + paddle.get_width()) {
			if(ball.get_x() > paddle.get_x() + (paddle.get_width() / 2)) {
				dir = 4;
			}
			else if (ball.get_x() == paddle.get_x() + (paddle.get_width() / 2)) {
				dir = 2;
			}
			else {
				dir = 3;
			}
		}
	}

	// brick hit
	if(ball.get_y() > (height / wall_shift) && ball.get_y() < layers + (height / wall_shift)) {
		if (wall[(int) ball.get_y() - (height / wall_shift)][(int) ball.get_x()].get_alive()) {
			wall[(int) ball.get_y() - (height / wall_shift)][(int) ball.get_x()].set_alive(false);
			player.set_score(player.get_score() + wall[(int) ball.get_y() - (height / wall_shift)][(int) ball.get_x()].get_score());
			dir = 1;
		}
	}

	// miss -> reset ball
	if(ball.get_y() > paddle.get_y()) { 
		player.set_lives(player.get_lives() - 1);
		ball.set_x(width / 2);
		ball.set_y(height - 5);
		dir = 0;
	}

	// left wall
	if(ball.get_x() == 0 && dir == 3) { dir = 4; }
	if(ball.get_x() == 0 && dir == 5) { dir = 6; }
	
	// right wall	
	if(ball.get_x() == width - 1 && dir == 4) { dir = 3; }
	if(ball.get_x() == width - 1 && dir == 6) { dir = 5; }

	// move ball
	switch(dir) {
		case 0:
			break;
		case 1:
			ball.set_y(ball.get_y() + ball.get_speed());
			break;
		case 2:
			ball.set_y(ball.get_y() - ball.get_speed());
			break;
		case 3:
			ball.set_y(ball.get_y() - ball.get_speed());
			ball.set_x(ball.get_x() - ball.get_speed());
			break;
		case 4:
			ball.set_y(ball.get_y() - ball.get_speed());
            ball.set_x(ball.get_x() + ball.get_speed());
			break;
		case 5:
			ball.set_y(ball.get_y() + ball.get_speed());
            ball.set_x(ball.get_x() - ball.get_speed());
			break;
		case 6:
			ball.set_y(ball.get_y() + ball.get_speed());
            ball.set_x(ball.get_x() + ball.get_speed());
			break;
	}
}

void draw()
{
	// draw frame
	erase();
	refresh();

	// horizontal walls
	for(int i = 0; i < width; i++) {
		mvaddch(0, i, wall_texture);
		mvaddch(height - 1, i, wall_texture);
	}

	// vertical walls
	for(int i = 1; i < height - 1; i++) {
		mvaddch(i, 0, wall_texture);
		mvaddch(i, width - 1, wall_texture);
	}
	
	// instructions
	mvprintw(height + 1, 1, "<- left");
	mvprintw(height + 2, 1, "-> right");
	mvprintw(height + 3, 1, "SPACE BAR serve");
	mvprintw(height + 4, 1, "q quit");

	// player details
	mvprintw(1, width / 2 / 2, "Score: %i", player.get_score());
	mvprintw(1, (width / 2 / 2) * 2, "Lives left: %i", player.get_lives());

	// draw paddle
	for(int i = paddle.get_x(); i < paddle.get_x() + paddle.get_width(); i++) {
		mvaddch(paddle.get_y(), i, paddle_texture);
	}

	// draw ball
	mvaddch(ball.get_y(), ball.get_x(), ball_texture);

	// draw bricks

	for(int i = 0; i < layers; i++) {
		for(int j = 0; j < width; j++) {
			if (wall[i][j].get_alive()) {
				mvaddch(wall[i][j].get_y(), wall[i][j].get_x(), brick_texture);
			}
		}
	}


}
