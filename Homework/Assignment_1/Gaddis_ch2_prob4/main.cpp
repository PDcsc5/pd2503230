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
    meal=44.50,
    tax=0.0675*meal,
    tip=(meal+tax)*.15,
    total=meal+tax+tip;
    
    cout<<"meal cost: $"<<meal<<endl;
    cout<<"tax amount: $"<<tax<<endl;
    cout<<"tip amonut: $"<<tip<<endl;
    cout<<"total bill: $"<<total<<endl;

    return 0;
}

