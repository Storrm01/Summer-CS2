#include<iostream>
using namespace std;

#include "recFuncs.h"

int main(){
    int arr[4] = {10, 20, 30, 40};

    cout << findVal(arr, 4, 30) << endl;

    countDown(5);

    countdownR(0);

    // cout << findValR(arr, 4, 30);
    // cout << endl;

    helloR(10);

    cout << rFunc(3, 2);
    cout << endl;

    cout << sumEvens(10);
    cout << endl;

}