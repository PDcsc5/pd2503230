/* 
 * File:   main.cpp
 * Author: KrabbyPatty
 *
 * Created on July 1, 2014, 8:13 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    float toWght, pltWght, stkWght, widWght=9.2;
    int widAmnt;
    cout<<"Enter total weight in lbs: ";cin>>toWght;
    cout<<"Enter weight of palletin lbs: ";cin>>pltWght;
    cout<<setprecision(2)<<fixed;
    stkWght=toWght-pltWght;
    widAmnt=stkWght/widWght;
    cout<<"Number of widgets on the pallet: "<<widAmnt;
            
    
    
    
//Exit stage right
    return 0;
}