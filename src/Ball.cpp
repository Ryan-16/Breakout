#include "Ball.h"

Ball::Ball(double x, double y, int speed)
{
    set_x(x);
    set_y(y);
    set_speed(speed);
}

void Ball::set_x(double a)
{
    x = a;
}

void Ball::set_y(double a)
{
    y = a;
}
    
void Ball::set_speed(int a)
{
    speed = a;
}

double Ball::get_x()
{ 
	return x; 
}

double Ball::get_y()
{ 
	return y; 
}

int Ball::get_speed()
{ 
	return speed; 
}
