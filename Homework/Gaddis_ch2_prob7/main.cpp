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
    
    float
    rpy=1.5,         //level (Rise Per Year) in millimeters
    yrs5=rpy*5,      //rise in 5 years
    yrs7=rpy*7,      //rise in 7
    yrs10=rpy*10;    //rise in 10
    
    cout<<"In 5 years the ocean level will rise by "<<yrs5<<"mm"<<endl;
    cout<<"In 7 years the ocean level will rise by "<<yrs7<<"mm"<<endl;
    cout<<"In 10 years the ocean level will rise by "<<yrs10<<"mm"<<endl;
    
//Exit stage right
    return 0;
}



