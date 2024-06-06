#include <iostream>
using namespace std;

#include "functions.h"

int main(){
    Hello("Hubert");
    Hello("World");

    // test countdown
    cout << countdown(10);

    // write a loop that will print values from 10 to 23
    for(int i = 10; i <=23; i++){
        cout << i << endl;
        i++;
    }



    // write a loop that will print odd values from 99 to 70
    for(int i = 99; i <= 70; i--){
        if(i / 2 == 0){
            return 1;
        }
        else{
            cout << i << endl;
        }
    }

    // write a loop that will print a number doubled each
    // iteration starting from 2 and ending at 1024

    for(int i = 2; i <= 1024; i = i + 2){
        cout << i * 2;
    }


    }