/* 
 * File:   main.cpp
 * Author: KrabbyPatty
 *
 * Created on July 2, 2014, 12:10 AM
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
    
    float celC, ferenH;
    cout<<setprecision(2)<<fixed;
    cout<<"Input temperature in celcius.\n";
    cout<<"Press enter to convert to fahrenheit\n";
    cout<<"Celsius: ";cin>>celC;
    ferenH=(celC*9)/5+32;
    cout<<"Fahrenheit: "<<ferenH;
    
            
            
    
    
//Exit stage right
    return 0;
}
