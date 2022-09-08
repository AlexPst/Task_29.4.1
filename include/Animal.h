#ifndef UNTITLED8_ANIMAL_H
#define UNTITLED8_ANIMAL_H

#include <iostream>

class Animal{

public :
    static void meeting(Animal* animal_1, Animal* animal_2);
    virtual void makeSound(Animal* animal)=0;
};

#endif //UNTITLED8_ANIMAL_H
