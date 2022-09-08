#ifndef UNTITLED8_DOG_H
#define UNTITLED8_DOG_H

#include "Animal.h"

using namespace std;
class Dog : public Animal {

public:
    void makeSound(Animal* animal) override;
};
#endif //UNTITLED8_DOG_H
