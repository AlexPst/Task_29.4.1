#include "../include/Cat.h"

void Cat::setTalents(Talents* talents, string talent) {

    if(talent == "Swimming") {

        talentsList.push_back(talents->getTalentSwimming());
    }
    if(talent == "Dancing") {
        talentsList.push_back(talents->getTalentDancing());
    }
    if(talent == "Counting") {
        talentsList.push_back(talents->getTalentCounting());
    }


}

void Cat::showTalent() {
    cout << "This is" << name << " and it has some talents:\n";
    for (int i = 0; i < talentsList.size(); ++i) {
        cout << "It can " << talentsList[i] << endl;
    }
}