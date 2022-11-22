// main.cpp
//

#include <iostream>
#include "myClasses.h"

using namespace std;

int main() {

    Animal wolf(5);
    Spirit phantom("Kiki");

    cout << wolf.get_age() << endl;
    cout << phantom.get_name() << endl;

    return 0;
}
