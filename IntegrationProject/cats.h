#pragma once
#include "animals.h"
#include <iostream>
#include <vector>

// The visibility inheritance model is when a base class is derived by a derived class with the help of inheritance, 
// the accessibility of base class by the derived class is controlled by visibility modes. 
// The derived class doesn’t inherit access to private data members. However, it does inherit a full parent object, 
// which contains any private members which that class declares.
class Cats : public Animals
{
private:
	int numOfCats;
	int oldestCat;
	std::vector<int> catsInShelter;
public:
	Cats(int cats);
	//dynamic dispatch
	void setAnimals(int cats);
	void addCatDays();
	void findOldestCat();
	int getNumOfCats() { return numOfCats; }
	int getOldestCat() { return oldestCat; }
	void compareCats(int numCats, int numAnimals);
};

