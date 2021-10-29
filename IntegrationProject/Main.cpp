#include <iostream>
#include <vector>
#include <string>
#include "Animals.h"
#include "Cats.h"
#include "Dogs.h"
using namespace std;

// COP 3003 Integration Project
// Author: Stirling Sites
// Based off of Cracking the Coding Interview by Gayle Laakmann Mcdowell

// Problem #1 from chapter 3 Stacks and Queues
// Animal Shelter: An animal shelter, which holds only dogs and cats, operates on a strictly "first in, first out" basis.
// People must adopt either the "oldest" (based on arrival time) of all animals at the shelter or they can select whether
// they would perfer a dog or a cat (and will receive the oldest animal of that type). They cannot select which specific
// animal they would like. Create the data structures to maintain this system and implement operation such as enqueue, 
// dequeueAny, dequeueDog, and dequeueCat. You may use built-in LinketList data structure.

// The difference between object oriented programming(OOP) and procedural/fucntioanl programming is that
// OOP is based on a real time application whereas the entire focus of procedural programming is on data and functions.

int main() {
	Animals animalsInShelter(0, "");
	Cats catsInShelter(0);
	Dogs dogsInShelter(0);
	cout << "Total number of animals in " << animalsInShelter.getNameOfShelter() << " shelter is " << animalsInShelter.getNumOfAnimals() << endl;
	cout << "Dogs in " << animalsInShelter.getNameOfShelter() << " shelter is " << dogsInShelter.getNumOfDogs() << endl;
	cout << "Cats in " << animalsInShelter.getNameOfShelter() << " shelter is " << catsInShelter.getNumOfCats() << endl;
	dogsInShelter.addDogDays();
	catsInShelter.addCatDays();
	catsInShelter.findOldestCat();
	dogsInShelter.findOldestDog();
	cout << "The cat that has been in the shelter the longest has been in for - " << catsInShelter.getOldestCat() << " days" << endl;
	cout << "The dog that has been in the shelter the longest has been in for - " << dogsInShelter.getOldestDog() << " days" << endl;
	if (catsInShelter.getOldestCat() > dogsInShelter.getOldestDog()) {
		cout << "The animal that has been in " << animalsInShelter.getNameOfShelter() << " shelter the longest is a cat that has been in for " << catsInShelter.getOldestCat() << " days!" << endl;
	} else {
		cout << "The animal that has been in " << animalsInShelter.getNameOfShelter() << " shelter the longest is a dog that has been in for " << dogsInShelter.getOldestDog() << " days!" << endl;
	}
}

