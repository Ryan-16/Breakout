#ifndef BREAKOUT_WALL_H
#define BREAKOUT_WALL_H

#include <string>

class Wall {

	public:
		Wall(int height, int width);
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
		int height, width;

};

#endif
