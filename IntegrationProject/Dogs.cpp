#include "Dogs.h"
#include "Animals.h"
#include <iostream>
#include <vector>
#include <algorithm>

Dogs::Dogs(int dogs)
{
    setAnimals(dogs);
}
void Dogs::setAnimals(int dogs)
{
    std::cout << "How many dogs are in the shelter?" << std::endl;
    std::cin >> dogs;
    numOfDogs = dogs;
}
void Dogs::addDogDays()
{
    for (int i = 1; i <= numOfDogs; i++) {
        int daysInShelter = 0;
        std::cout << "How many days has dog " << i << " been in the shelter? " << std::endl;
        std::cin >> daysInShelter;
        //operation on aggegate
        dogsInShelter.push_back(daysInShelter);
    }
}
void Dogs::findOldestDog()
{
    int x = 0;
    for (int i = 0; i < numOfDogs; i++) {
        //iterator
        int& element = dogsInShelter[i];
        if (element > x) {
            x = element;
        }
    }
    oldestDog = x;
}
void Dogs::compareDogs(int numDogs, int numAnimals)
{
    if (numDogs > numAnimals) {
        std::cout << "Invalid number of dogs in shelter" << std::endl;
        std::cout << "Enter vlaid number of dogss in shelter " << std::endl;
        std::cout << "How many dogss are in the shelter?" << std::endl;
        std::cin >> numDogs;
        numOfDogs = numDogs;
    }
}
