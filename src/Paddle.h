#ifndef BREAKOUT_PADDLE_H
#define BREAKOUT_PADDLE_H

class Paddle {

	public:
		Paddle(double x, double y, double width);
		void set_x(double a);
		void set_y(double a);
		void set_width(double a);
		double get_x();
		double get_y();
		double get_height();
		double get_width();

	private:
		void set_height(double a);
		double x, y, height, width;
};

#endif
