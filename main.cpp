#include <iostream>
#include "include/Cat.h"
#include "include/Swimming.h"
#include "include/Dancing.h"
#include "include/Counting.h"


using namespace std;
int main() {

    Talents* swim = new Swimming();
    Talents* dance = new Dancing();
    Talents* count = new Counting();

    string command;
    bool isActive = true;
    Cat cat("Steve");

    while (isActive){
        cout<<"Input command"<<endl;
        cin >> command;
        if(command == "swim")
        {
            cat.setTalents(swim);
        }
        else if(command == "count")
        {
            cat.setTalents(count);
        }
        else if(command == "dance")
        {
            cat.setTalents(dance);
        }
        else if(command == "finish")
        {
            isActive = false;
        }
        else if(command == "show")
        {
            cat.showTalent();
        }
        else if(command == "finish")
        {
            isActive = false;
        }
    }


    return 0;

}
