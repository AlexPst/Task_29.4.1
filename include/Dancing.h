
#ifndef HOMEWORK_29_4_1_DANCING_H
#define HOMEWORK_29_4_1_DANCING_H
#include "Talents.h"
#include <iostream>


using namespace std;
class Dancing : public Talents{

public:
    ~Dancing(){};
    virtual string myTalent(){return "Dancing";}
};


#endif //HOMEWORK_29_4_1_DANCING_H
