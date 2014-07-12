/* 
 * File:   main.cpp
 * Author: KrabbyPatty
 *
 * Created on June 30, 2014, 8:46 PM
 */


#include <cstdlib>
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    float scnds, ftprsec, dist; //seonds, ft per second, distance
    
    ftprsec=32;
    
    cout<<"Enter the amount of seconds the object is in freefall\n";
    cin>>scnds;
    dist=((32*(scnds*scnds))/2);
    cout<<"The distance that an object will travel in "<<scnds<<" seconds is\n";
    cout<<dist<<" feet\n";
            
    
    
    
    
    
//Exit stage right
    return 0;
}