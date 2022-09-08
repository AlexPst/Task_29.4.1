#include "../include/Animal.h"

using namespace std;
void Animal::meeting(Animal *animal_1, Animal *animal_2) 
{
    animal_1->makeSound(animal_2);
    
    animal_2->makeSound(animal_1);
}