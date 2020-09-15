#ifndef BREAKOUT_BRICK_H
#define BREAKOUT_BRICK_H

class Brick {

	public:
		Brick(double x, double y, double width, double height, int health);
		void set_x(double a);
		void set_y(double a);
		void set_width(double a);
		void set_height(double a);
		void set_health(int a);
		double get_x();
		double get_y();
		double get_width();
		double get_height();
		int get_health();

	private:
		double x, y, width, height;
		int health;
};

#endif
