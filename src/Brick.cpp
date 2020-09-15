#include "Brick.h"

Brick::Brick(double x, double y, double width, double height, int health)
{
    set_x(x);
    set_y(y);
	set_width(width);
	set_height(height);
	set_health(health);
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

void Brick::set_health(int a) {
	health = a;
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

int Brick::get_health() {
	return health;
}
