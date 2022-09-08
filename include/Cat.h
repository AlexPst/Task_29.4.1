
#ifndef UNTITLED8_CAT_H
#define UNTITLED8_CAT_H

#include "Animal.h"

using namespace std;
class Cat : public Animal{
public:
    void makeSound(Animal* animal)override;
};
#endif //UNTITLED8_CAT_H
