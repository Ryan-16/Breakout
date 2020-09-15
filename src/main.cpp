#include <stdlib.h>
#include <iostream>
#include <string>
#include "Ball.h"
#include "Brick.h"

// initialise globals

// function declarations

int main() {

	// Ball test
	Ball ball(5, 3, 1);

	std::cout << "Ball Test \n";
	std::cout << ball.get_x() << "\n";
	std::cout << ball.get_y() << "\n";
	std::cout << ball.get_speed() << "\n";
    
	// Brick test
	Brick brick(5, 10, 10, 2, 5);

	std::cout << "Brick Test \n";
	std::cout << brick.get_x() << "\n";
	std::cout << brick.get_y() << "\n";
	std::cout << brick.get_score() << "\n";
	std::cout << brick.get_colour() << "\n";

	return 0;
}

