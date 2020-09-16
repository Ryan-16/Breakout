#ifndef BREAKOUT_PLAYER_H
#define BREAKOUT_PLAYER_H

class Player {

	public:
		Player();
		void set_lives(int a);
		void set_score(int a);
		void set_hits(int a);
		int get_lives();
		int get_score();
		int get_hits();

	private:
		int lives, score, hits;
};

#endif
