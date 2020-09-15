#ifndef BREAKOUT_BALL_H
#define BREAKOUT_BALL_H

class Ball {

	public:
		Ball(double x, double y, int speed);
		void set_x(double a);
		void set_y(double a);
		void set_speed(int a);
		double get_x();
		double get_y();
		int get_speed();

	private:
		double x, y;
		int speed;
};

#endif
