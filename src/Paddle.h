#ifndef BREAKOUT_PADDLE_H
#define BREAKOUT_PADDLE_H

class Paddle {

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
		void set_height(double a);
		double x, y, height, width;
		int speed;
};

#endif
