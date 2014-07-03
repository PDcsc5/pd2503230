/* 
 * File:   main.cpp
 * Author: KrabbyPatty
 *
 * Created on July 1, 2014, 4:37 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    float gasCap,maxMil, mpg;
    
    cout<<"Enter the amount of gas your vehicle can hold in gallons: \n";
    cin>>gasCap;
    cout<<"Enter the maximum distance your vehicle can travel in miles: \n";
    cin>>maxMil;
    mpg=maxMil/gasCap;
    cout<<"Your vehicle averages "<<mpg<<" miles per galllon.\n";    
    
//Exit stage right
    return 0;
}