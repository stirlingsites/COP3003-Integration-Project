#include "Animals.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
Animals::Animals() {}
Animals::Animals(int animals, std::string name)
{
    setAnimals(animals);
    setName(name);
}
void Animals::setAnimals(int animals)
{
    std::cout << "How many animals are in the shelter?" << std::endl;
    std::cin >> animals;
    totalNumOfAnimals = animals;
}
void Animals::setName(std::string name)
{
    std::string shelterName;
    std::cout << "What is the name of the shelter?" << std::endl;
    std::cin.ignore();
    getline(std::cin, shelterName);
    nameOfShelter = shelterName;
}

