#include <iostream>
#include "include/Cat.h"

using namespace std;
int main() {
    bool isActive = true;
    string command;
    Talents *talents = new Talents();
    Cat *cat = new Cat("Steve");
    string tal = "Swimming";
    cat->setTalents(talents, tal);
    cat->showTalent();



    return 0;
}
