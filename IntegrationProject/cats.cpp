#include "Cats.h"
#include "Animals.h"
#include <iostream>
#include <vector>
#include <algorithm>

Cats::Cats(int cats)
{
    setAnimals(cats);
}
void Cats::setAnimals(int cats)
{
    std::cout << "How many cats are in the shelter?" << std::endl;
    std::cin >> cats;
    numOfCats = cats;
}
void Cats::addCatDays()
{
    for (int i = 1; i <= numOfCats; i++) {
        int daysInShelter = 0;
        std::cout << "How many days has cat " << i << " been in the shelter? " << std::endl;
        std::cin >> daysInShelter;
        //operation on aggregate
        catsInShelter.push_back(daysInShelter);
    }
}
void Cats::findOldestCat()
{
    int x = 0;
    for (int i = 0; i < numOfCats; i++) {
        //itterator
        int& element = catsInShelter[i];
        if (element > x) {
            x = element;
        }
    }
    oldestCat = x;
}
void Cats::compareCats(int numCats, int numAnimals)
{
    if (numCats > numAnimals) {
        std::cout << "Invalid number of cats in shelter" << std::endl;
        std::cout << "Enter vlaid number of cats in shelter " << std::endl;
        std::cout << "How many cats are in the shelter?" << std::endl;
        std::cin >> numCats;
        numOfCats = numCats;
    }
}