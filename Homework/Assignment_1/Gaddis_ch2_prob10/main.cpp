/* 
 * File:   main.cpp
 * Author: Patrick De La Cruz
 * Created on June 26, 2014, 12:00 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    int
    mDriven=350,                 //in miles
    gasUsed=12,                  //gallons         
    mpg=mDriven/gasUsed;        //miles per gallon
    
    cout<<"A car that drives "<<mDriven<<"miles on "<<gasUsed<<" gallons\n"
    <<"of gas can go "<<mpg<< "miles per gallon\n";
//Exit stage right
    return 0;
}
