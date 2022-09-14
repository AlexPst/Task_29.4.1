
#ifndef HOMEWORK_29_4_1_TALENT_H
#define HOMEWORK_29_4_1_TALENT_H
#include "Counting.h"
#include "Dancing.h"
#include "Swimming.h"
#include <iostream>

using namespace std;

class Talents : virtual public Counting, virtual public Dancing, virtual public Swimming{

public:
    virtual ~Talents() = default;
    virtual void showTalent() = 0;
    virtual void setTalents(Talents* talents, string talent) = 0;
};

#endif //HOMEWORK_29_4_1_TALENT_H
