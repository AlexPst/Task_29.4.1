
#ifndef HOMEWORK_29_4_1_COUNTING_H
#define HOMEWORK_29_4_1_COUNTING_H
#include "Talents.h"
#include <iostream>


using namespace std;
class Counting : public Talents{

public:
    ~Counting(){};
    virtual string myTalent(){return "Counting";}
};

#endif //HOMEWORK_29_4_1_COUNTING_H
