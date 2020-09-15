#include "Brick.h"

Brick::Brick(double x, double y, double width, double height, int score)
{
    set_x(x);
    set_y(y);
	set_width(width);
	set_height(height);
	set_score(score);
	set_colour();
}

void Brick::set_x(double a) {
    x = a;
}

void Brick::set_y(double a) {
    y = a;
}
    
void Brick::set_width(double a) {
    width = a;
}

void Brick::set_height(double a) {
    height = a;
}

void Brick::set_score(int a) {
	score = a;
}

void Brick::set_colour() {
	colour = "#ffffff";
}

double Brick::get_x() { 
	return x; 
}

double Brick::get_y() { 
	return y; 
}

double Brick::get_width() { 
	return width; 
}

double Brick::get_height() { 
	return height; 
}

int Brick::get_score() {
	return score;
}

std::string Brick::get_colour() {
	return colour;
}
