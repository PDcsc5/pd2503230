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
    
    float tank, hwy, str, mpghwy, mpgstr;
    tank=20;
    hwy=26.8;
    str=21.5;
    mpghwy=tank*hwy;
    mpgstr=tank*str;
    
    cout<<"On a full tank of gas this car can go\n"
            <<mpghwy<<"miles on the highway and\n"
            <<mpgstr<<"miles on street\n";
    
    
//Exit stage right
    return 0;
}
