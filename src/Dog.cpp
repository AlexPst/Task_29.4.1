#include "../include/Dog.h"

void Dog::makeSound(Animal *animal)
{
    if(typeid(*animal) == typeid(Dog))
    {
        cout<<"Woof"<<endl;
    }
    else
    {
        cout<<"Bark"<<endl;
    }
}