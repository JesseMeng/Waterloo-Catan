#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <map>
#include <memory>
#include <string>
#include "enum.h"
#include "tile.h"
#include "criterion.h"
#include "goal.h"

class Board{
	std::vector<std::unique_ptr<Tile>> tiles;
	std::vector<std::unique_ptr<Criterion>> criteria;
	std::vector<std::unique_ptr<Goal>> goals;
	int geese;
	public:
		void print(); // prints Board
		std::vector<Colour> moveGeese(int pos); //moves Geese (in the case 7 is rolled)
		std::map<Colour, std::map<Resource, int>> distribute(int rollNum); //distributes Resources across Board
		std::string save(); // saves board (iterates through the 19 Tiles)
		void resetAchievables(); // resets Achievables to original state (unowned)
		void init(std::string state); //initializes Board
		Criterion* getCriterion(int index);
		Goal* getGoal(int index);
		int getGeese(); //get position of GEESE
		Board();
};

#endif
