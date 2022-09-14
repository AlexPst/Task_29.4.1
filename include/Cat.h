
#ifndef UNTITLED8_CAT_H
#define UNTITLED8_CAT_H

#include <vector>
#include "Talents.h"

using namespace std;
class Cat : public Talents{
private:
    vector<Talents>talentsList;
    string name;
public:
    Cat(string _name):name(_name){};
    void showTalent() override;
    void setTalents(Talents* talents, string talent) override;


};
#endif //UNTITLED8_CAT_H
