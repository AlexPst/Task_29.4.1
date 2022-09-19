
#ifndef HOMEWORK_29_4_1_SWIMMING_H
#define HOMEWORK_29_4_1_SWIMMING_H
#include <iostream>
#include "Talents.h"


using namespace std;
class Swimming: public Talents{

public:
    ~Swimming(){};
    virtual string myTalent(){return "Swimming";}
};
#endif //HOMEWORK_29_4_1_SWIMMING_H
