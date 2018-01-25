#ifndef CRITERION_H
#define CRITERION_H

#include "achievable.h"
#include "enum.h"
#include "exception.h"

//Criterion is an achievable
class Criterion: public Achievable{
	CriterionLevel level; //the level of this criterion
	bool isCorner;
	public:
		void upgrade() throw(IllegalBuildException); //upgrades the level of this criterion if possible
		CriterionLevel getLevel(); //returns the level of this criterion
		std::string status() override; //returns the status string of this criterion
		void setLevelNone(); //sets the level of this criterion to null
		void obtain(Student* player, bool begin) throw(IllegalBuildException); //potentially adds this criterion to player's possession
		Criterion(int num); //Constructor

		//BONUS FUNCTIONS
		bool isACorner();
		void setIsCorner(bool set);
};

#endif
