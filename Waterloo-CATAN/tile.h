#ifndef _TILE_H_
#define _TILE_H_

#include <string>
#include <vector>
#include <map>
#include "criterion.h"
#include "enum.h"
#include "student.h"

class Tile {
	protected:
		std::vector <Criterion *> criterion;
		Resource resource; 
		int value;
		bool hasGeese;
	public:
		Tile();
		std::map<Colour, std::map<Resource, int>>& distribute(std::map<Colour, std::map<Resource, int>>&feedback); 
		//distributes to all Colours(players) occupying current Tile
		bool occupiedBy(Colour colour); // returns whether passed in Colour owns a Criterion on the Tile
		std::string save(); // saves Tile resource and val (dice sum)
		void init(); // initializes Tile
		void addCriterion(Criterion* crit); // adds Tile's Criterions
		void setResource(Resource resource); 
		void setValue(int value);
		void setGeese(bool hasGeese); 
		std::string resourceStr(); // returns Tile's resource in string format
		std::string valueStr(); // returns Tile's val in string format
		std::string geeseStr(); // returns GEESE if getGeese == true and whitespace otherwise
		~Tile();
		int getVal();
		Resource getRes();
		bool getGeese();
		std::vector <Colour> colours(); // returns vector of Colours occupying the Tile
};

#endif
