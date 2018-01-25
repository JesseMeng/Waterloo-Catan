#ifndef GOAL_H
#define GOAL_H

#include "achievable.h"
#include "exception.h"

class Student;

//Goal is an achievable
class Goal: public Achievable{
public:
	std::string status() override; //returns the status string of this criterion
	void obtain(Student* player, bool load) throw (IllegalBuildException);
	Goal(int num); //Constructor
};

#endif
