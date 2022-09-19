
#ifndef UNTITLED8_CAT_H
#define UNTITLED8_CAT_H

#include <vector>
#include "Talents.h"

using namespace std;
class Cat {
private:
    string name;
public:
    vector<Talents*>talentsList;
    Cat(string _name):name(_name){};
    void showTalent();
    void setTalents(Talents* tal);


};
#endif //UNTITLED8_CAT_H
