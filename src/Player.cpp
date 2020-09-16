#include "Player.h"

Player::Player() {
    set_lives(3);
    set_score(0);
    set_hits(0);
}

void Player::set_lives(int a) {
    lives = a;
}

void Player::set_score(int a) {
    score = a;
}
    
void Player::set_hits(int a){
    hits = a;
}

int Player::get_lives() { 
	return lives; 
}

int Player::get_score() { 
	return score; 
}

int Player::get_hits() { 
	return hits;
}
