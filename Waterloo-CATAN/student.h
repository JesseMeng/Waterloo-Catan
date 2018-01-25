#ifndef STUDENT_H
#define STUDENT_H
#include <map>
#include "enum.h"
class Criterion;
class Goal;

class Student {
	std::map<int, Criterion *> criteria; // criteria owned
	std::map<int, Goal *> goals; //goals owned 
	std::map<Resource, int> resources; // number of each resources owned
	int victoryPoints; //victory of points of student
	int diceVal; // dice value of loaded die
	Colour colour; // Colour of the student

	bool greedyWarrior = false;
	bool keenestStudent = false;
	bool highAchiever = false;
   public:
		Student(Colour c); //Constructor
		std::string status(); // status of student
		std::string completions(); // completed criterions of a student
		void achieve(Goal *g, bool check = true); // achieving a goal
		void complete(Criterion *c, bool check = true); //completing a criterion
		void improve(Criterion *c, bool check = true); //upgrading a criterion
		Resource take(Resource r = Resource::Netflix,  int amount = 1); //take away one resource by random if r is Netflix
		void give(Resource r, int amount = 1); //gain one resource r
		void trade(Resource add, Resource remove); //trade adds 1 resource add and removes 1 resource remove
		int countResources(); //produces total number of resources of this student
		bool hasWon(); // returns whether the student has more or equal to 10 victory points
		Colour getColour(); //returns colour
		int diceNum(); //returns diceVal
		char getColourChar(); //returns the first char of colour of student
		void setDice(int val = 0); //setting diceVal to val
		void init(std::string state = ""); //init resets the student's status if state is empty otherwise loads state
		std::string save(); // produces the save string to be used for saving student's data
		//BONUS FUNCTION
		bool hasCornerPiece();
		void setGreedy(bool val);
		void setKeen(bool val);
		void setHigh(bool val);
		int goalsOwned();
		int criterionsOwned();
};

#endif
