/* 
 * File:   main.cpp
 * Author: KrabbyPatty
 *
 * Created on July 1, 2014, 7:45 PM
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
    
    string movName;
    float adTkt=6.00, adSale, chTkt=3.00, chSale, dCut=.20, gbop, nbop, apd;
    cout<<"Enter amount of child tickets sold: ";cin>>chSale;
    cout<<"Enter amount of adult tickets sold: ";cin>>adSale;
    cout<<setprecision(2)<<fixed;
    gbop=(chSale*chTkt)+(adSale*adTkt);
    nbop=gbop*dCut;
    apd=gbop-nbop;
    cout<<"Movie Name:                          "<<movName<<endl;
    cout<<"Adult tickets sold:                  "<<adSale<<endl;
    cout<<"Child tickets sold:                  "<<chSale<<endl;
    cout<<"Gross Box Office Profit:             "<<gbop<<endl;
    cout<<"Net Box Office Profit:               "<<nbop<<endl;
    cout<<"Amount Paid to Distributor           "<<apd<<endl;
            
  
//Exit stage right
    return 0;
}