#ifndef BREAKOUT_BRICK_H
#define BREAKOUT_BRICK_H

#include <string>

class Brick {

	public:
		Brick();
		void set_x(double a);
		void set_y(double a);
		void set_width(double a);
		void set_height(double a);
		void set_score(int a);
		void set_alive(bool a);
		double get_x();
		double get_y();
		double get_width();
		double get_height();
		int get_score();
		bool get_alive();
		std::string get_colour();

	private:
		// colour infered from score hence private
		void set_colour();
		// brick defined as x, y (top left), and a width and height
		double x, y, width, height;
		int score;
		bool alive;
		std::string colour;
};

#endif
