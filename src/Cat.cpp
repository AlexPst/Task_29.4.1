#include "../include/Cat.h"

void Cat::makeSound(Animal *animal)
{
    if(typeid(*animal) == typeid(Cat))
    {
        cout << "Purr"<<endl;
    }
    else
    {
        cout<<"Meow"<<endl;
    }
}