#include "Brick.h"

Brick::Brick()
{
    // empty constrctor so wall array can be constructed of type Brick
}

void Brick::set_x(double a)
{
    x = a;
}

void Brick::set_y(double a)
{
    y = a;
}

void Brick::set_width(double a)
{
    width = a;
}

void Brick::set_height(double a)
{
    height = a;
}

void Brick::set_score(int a)
{
    score = a;
    set_colour();
}

void Brick::set_colour()
{
    switch (score)
    {
    case 1:
        colour = "Yellow";
        break;
    case 3:
        colour = "Green";
        break;
    case 5:
        colour = "Orange";
        break;
    case 7:
        colour = "Red";
        break;
    }
}

void Brick::set_alive(bool a)
{
    alive = a;
}

double Brick::get_x()
{
    return x;
}

double Brick::get_y()
{
    return y;
}

double Brick::get_width()
{
    return width;
}

double Brick::get_height()
{
    return height;
}

int Brick::get_score()
{
    return score;
}

std::string Brick::get_colour()
{
    return colour;
}

bool Brick::get_alive()
{
    return alive;
}
