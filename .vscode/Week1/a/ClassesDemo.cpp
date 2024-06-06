#include <iostream>
using namespace std;
#include "Classes.h"


int main(){
    // declare an integer object named x
    int x;
    // declare a string object named myWord
    string myWord;
    // declare an Airplane with any identifier you want
    Airplane yourName;
    // Declare 3 airplanes, a, b, c
    Airplane a, b, c;
    // Declare an array of 999 Airplanes
    Airplane myPlanes[999];

    // 3. Access
    // to access any attribute of any object
    // objectID . (dot operator means "access") {thingIWant}
        // access the numPass of Airplane a and assign with 7
    a.numPass = 7;
        // access the fuel of Airplane b and print its value
    cout << b.fuel << endl;
        // assign the maxPass of 3rd plane in myPlanes array
            // with the numPass of Airplane a
    myPlanes[2].maxPass = a.numPass;

    a.print();

    // Give Airplane a 100% fuel (1.0)
    a.fuel = 1.0;

    a.fly(10);

    // print the details of a again (new fuel value)

    a.print();
}