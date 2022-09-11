#include <iostream>
#include "include/Cat.h"

using namespace std;
int main() {
    bool isActive = true;
    string command;
    Cat *cat = new Cat("Steve");
    Talents *talents;
    string talent = "Swimming";
    cat->setTalents(talents, talent);
    cat->showTalent();



    return 0;
}
