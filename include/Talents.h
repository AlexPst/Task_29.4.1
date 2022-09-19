
#ifndef HOMEWORK_29_4_1_TALENT_H
#define HOMEWORK_29_4_1_TALENT_H

#include <iostream>

using namespace std;

class Talents{

public:
    virtual ~Talents() = default;
    virtual string myTalent() = 0;
};

#endif //HOMEWORK_29_4_1_TALENT_H
