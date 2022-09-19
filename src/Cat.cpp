#include "../include/Cat.h"

void Cat::setTalents(Talents *tal) {
    talentsList.push_back(tal);
}

void Cat::showTalent() {
    cout << "This is " << name << " and it has some talents:\n";
    for (int i = 0; i < talentsList.size(); ++i) {
        cout << "It can " << talentsList[i]->myTalent() << endl;
    }
}