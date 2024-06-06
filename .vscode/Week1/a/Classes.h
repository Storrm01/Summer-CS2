#include <iostream>
using namespace std;

// For classes
    // 1. Definition
        // attributes (members)
        // methods
        // constructors
    // 2. Declaration (create objects of the class)
    // 3. Access

// Define an Airplane class (everything public is ok)
    // airplanes have
    // number of passengers
    // max passengers
    // airplane model (ex: "boeing 757")


class Airplane{
    public:
        int numPass;
        int maxPass;        
        string model;
        float fuel;

        // define a method print() that will display Airplane
            // attributes
        void print(){
            cout << "Number of passengers: " << numPass << " ";
            cout << "Maximum capacity: " << maxPass << " ";
            cout << "Model: " << model << " ";
            cout << "Remaining fuel: " << fuel*100 << "%" << " ";
            cout << endl;
        }
        // define a method fly() which will take in distance
            // (number of miles to fly) and will print a message
            // saying that plane has traveled.
            // flying consumes fuel. Every mile consumes 0.01
                // of our fuel
                // if there is insufficient fuel, do not fly
                // print an error
        void fly(int distance){      
            // 1. We have enough fuel to fly
            // check how much fuel we would have
            if(fuel - distance * 0.01){
                cout << "The plane has traveled " << distance <<  " miles!" << endl;
                // reduce fuel by 0.01 for each mile
                fuel =  fuel - distance * 0.01;
            }
            // 2. We do not have enough fuel
            else{
                cout << "Not enough fuel!" << endl;
            }
        }
};
