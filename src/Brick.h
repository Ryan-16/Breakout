#ifndef BREAKOUT_BRICK_H
#define BREAKOUT_BRICK_H

#include <string>

class Brick {

	public:
		Brick(double x, double y, double width, double height, int score);
		void set_x(double a);
		void set_y(double a);
		void set_width(double a);
		void set_height(double a);
		void set_score(int a);
		double get_x();
		double get_y();
		double get_width();
		double get_height();
		int get_score();
		std::string get_colour();

	private:
		void set_colour();
		double x, y, width, height;
		int score;
		std::string colour;
};

#endif
