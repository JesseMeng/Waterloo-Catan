#ifndef ACHIEVABLE_H
#define ACHIEVABLE_H

#include <string>
#include <vector>

class Criterion;
class Goal;
class Student;

class Achievable{
	protected:
		Student* owner; //owner of this achievable
		std::vector<Criterion *> cNeighbours; //neighbouring criteria
		std::vector<Goal *> gNeighbours; //neighbouring goals
		const int labelNum;  //its default place on the board
	public:
		virtual bool isOwnedBy(Student* player); //isOwnedBy checks if owner is player
		virtual std::string status()=0; //status of the achievable
		Achievable(int num); //the constructor assigns num to labelnum and assigns nullptr to owner
		void setOwnerNull(); //sets the owner of this achievable to null pointer
		int getNum();  //returns the label num
		Student* getOwner();  //returns the owner of this achievable
		void addCNeighbour(Criterion* c); //adds c to the neighbouring criteria
		void addGNeighbour(Goal *g); //adds g to the neighbouring goals
};

#endif
