#ifndef BREAKOUT_PADDLE_H
#define BREAKOUT_PADDLE_H

class Paddle
{

public:
    Paddle(double x, double y, double width, int speed);
    void set_x(double a);
    void set_y(double a);
    void set_width(double a);
    void set_speed(int a);
    double get_x();
    double get_y();
    double get_height();
    double get_width();
    int get_speed();

private:
    // height of paddle currently fixed hence private setter
    void set_height(double a);
    // paddle defined as x, y (top-left coordinates), a width and height
    double x, y, height, width;
    // number of "pixels" moved in either direction per keystroke
    int speed;
};

#endif
