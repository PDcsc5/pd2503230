/*
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 7, 2014, 11:01 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    float amntdue, interdue, minpay, balance;
    char cont;
    do
    {
        cout<<"enter balance due: ";
    cin>>balance;
    if (balance>1000)
        interdue= ((balance-1000)*.01+ (1000)*.015);
    else
        interdue=balance*.015;
    amntdue=balance+interdue;
    minpay=amntdue<=10?
        amntdue : ((amntdue*.1)>10?(amntdue*.1):10);
    cout<<"\n interest on balance is: "<<interdue;
    cout<<"\n total amount due: "<<amntdue;
    cout<<"\n minimum payment is: "<<minpay;
    cout<<"\n to repeat calculation press y or Y\n";
    cin>>cont;
    }
    while (cont=='y'|| cont=='Y');
    
        
    //Exit stage right
    return 0;
}

