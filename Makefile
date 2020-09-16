default: build

build:
	g++ src/main.cpp src/Brick.cpp src/Ball.cpp src/Paddle.cpp src/Player.cpp -lncurses -o breakout

clean:
	rm breakout
