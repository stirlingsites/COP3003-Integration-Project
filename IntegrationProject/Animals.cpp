#include "Animals.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
Animals::Animals() {}
Animals::Animals(int animals, std::string name)
{
    setAnimals(animals, name);
}
void Animals::setAnimals(int animals, std::string name)
{
    std::cout << "How many animals are in the shelter?" << std::endl;
    std::cin >> animals;
    totalNumOfAnimals = animals;
    std::cout << "What is the name of the shelter?" << std::endl;
    std::cin >> name;
    nameOfShelter = name;
}
