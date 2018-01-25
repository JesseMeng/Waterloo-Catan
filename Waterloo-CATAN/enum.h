#ifndef ENUM_H
#define ENUM_H

#include <iostream>

enum class GameState { BeginGame, BeginTurn, EndTurn, EndGame, Trade, Geese };
enum class Colour { Blue, Red, Orange, Yellow };
enum class CriterionLevel { None, Assignment, Midterm, Exam };
enum class Resource { Caffeine, Lab, Lecture, Study, Tutorial, Netflix };

//output operators
std::ostream &operator<<(std::ostream &out, const CriterionLevel &c);

std::ostream &operator<<(std::ostream &out, const Colour &c);

std::ostream &operator<<(std::ostream &out, const Resource &r);

//input operators
std::istream &operator>>(std::istream &in, Colour &c);

std::istream &operator>>(std::istream &in, Resource &r);

//representing enums as ints
int levelToNum(CriterionLevel a);

int colourToNum(Colour a);

int resourceToNum(Resource a);

// representing ints as enums
Resource numToResource(int a);

Colour numToColour(int a);

CriterionLevel numToLevel(int a);

#endif
