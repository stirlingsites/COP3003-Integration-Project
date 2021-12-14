#pragma once
#include <vector>
#include <iostream>
#include <string>

class Animals
{
private:
	int totalNumOfAnimals;
	std::string nameOfShelter;
public:
	Animals();
	Animals(int animals, std::string name);
	//dynamic dispatch
	virtual void setAnimals(int animals);
	void setName(std::string name);
	int getNumOfAnimals() { return totalNumOfAnimals;  }
	std::string getNameOfShelter() { return nameOfShelter;  }
};

