#ifndef BREAKOUT_BALL_H
#define BREAKOUT_BALL_H

class Ball {
public:
    Ball(double x, double y, int speed);
    double get_x() { return x; }
    double get_y() { return y; }
    int get_speed() { return speed; }
    void set_x(double a) {
        x = a;
    }
    void set_y(double a) {
        y = a;
    }
    void set_speed(int a){
        speed = a;
    }
private:
    double x, y;
    int speed;

};

#endif
