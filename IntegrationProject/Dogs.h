#pragma once
#include <iostream>
#include "Animals.h"
#include <vector>
class Dogs : public Animals
{
private:
	int numOfDogs;
	int oldestDog;
	std::vector<int> dogsInShelter;
public:
	Dogs(int dogs);
	//dynamic dispatch
	void setAnimals(int dogs);
	void addDogDays();
	void findOldestDog();
	int getNumOfDogs() { return numOfDogs; }
	int getOldestDog() { return oldestDog; }
	void compareDogs(int numDogs, int numAnimals);
};

