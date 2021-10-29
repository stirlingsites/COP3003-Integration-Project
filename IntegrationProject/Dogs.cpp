#include "Dogs.h"
#include "Animals.h"
#include <iostream>
#include <vector>
#include <algorithm>

Dogs::Dogs(int dogs)
{
    setDogs(dogs);
}
void Dogs::setDogs(int dogs)
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
        dogsInShelter.push_back(daysInShelter);
    }
}
void Dogs::findOldestDog()
{
    int x = 0;
    for (int i = 0; i < numOfDogs; i++) {
        int& element = dogsInShelter[i];
        if (element > x) {
            x = element;
        }
    }
    oldestDog = x;
}