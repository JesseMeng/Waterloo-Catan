#ifndef GAME_H
#define GAME_H

#include <memory>
#include <map>
#include "enum.h"

class Student;
class Board;

class Game {
	std::unique_ptr<Board> board; // uniue pointer to the board
	std::map<Colour, std::unique_ptr<Student>> players; // list of players
	GameState currentState; // used to determine which prompt to use
	Student *currentPlayer; // iterates through the players
	// BONUS
	Student *keenestStudent;
	Student *highAchiever;

	void getGeesed(); // removes half the resources from anyone with more than 10
	std::string help(); // help message
	Student *next(); // end turn
	bool get(auto &i); // used to get input and determine eof
	public:
		Game(); // constructor
		~Game(); // destructor
		void prompt(); // prompts the user for a message
		void save(std::string file); // saves the game to a file
		void init(std::string board = ""); // initializes board for new games
		void load(std::string file); // load a game from a file
};

#endif
