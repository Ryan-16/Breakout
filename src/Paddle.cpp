#include "Paddle.h"

Paddle::Paddle(double x, double y, double width) {
    set_x(x);
    set_y(y);
	set_height(2);
    set_width(width);
}

void Paddle::set_x(double a) {
    x = a;
}

void Paddle::set_y(double a) {
    y = a;
}

void Paddle::set_height(double a) {
	height = a;
}
    
void Paddle::set_width(double a) {
    width = a;
}

double Paddle::get_x() { 
	return x; 
}

double Paddle::get_y() { 
	return y; 
}

double Paddle::get_height() { 
	return height; 
}

double Paddle::get_width() { 
	return width; 
}
