#include <stdlib.h>
#include <iostream>
#include <string>
#include "Ball.h"
#include "Brick.h"
#include "Paddle.h"
#include "Player.h"

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
	
	// Paddle test
	Paddle paddle(5, 10, 10);

	std::cout << "Paddle Test \n";
	std::cout << paddle.get_x() << "\n";
	std::cout << paddle.get_y() << "\n";
	std::cout << paddle.get_width() << "\n";
	std::cout << paddle.get_height() << "\n";

	// Player test
	Player player;
	
	std::cout << "Player Test \n";
	std::cout << player.get_score() << "\n";
	std::cout << player.get_hits() << "\n";
	std::cout << player.get_lives() << "\n";

	return 0;
}

