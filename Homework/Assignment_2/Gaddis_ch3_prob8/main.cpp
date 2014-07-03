/* 
 * File:   main.cpp
 * Author: KrabbyPatty
 *
 * Created on July 1, 2014, 11:16 PM
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
    
    float reCost, insRec, minIns=.80;
    
    cout<<"Input the amount it would cost to replace your structure \n";
    cout<<setprecision(2)<<fixed;
    cin>>reCost;
    insRec=reCost*minIns;
    cout<<"minimum amount of insurance suggested for your structure is \n";
    cout<<"$"<<insRec<<endl;
    
    
//Exit stage right
    return 0;
}

