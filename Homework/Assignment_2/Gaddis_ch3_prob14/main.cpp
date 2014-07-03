/* 
 * File:   main.cpp
 * Author: rcc
 *Created on July 3, 2014, 12:33 PM
 * Madison County provides a $5,000 homeowner exemption for its senior citizens.
For example, if a senior s house is valued at $158,000 its assessed value would be
$94,800, as explained above. However, he would only pay tax on $89,800. At last
year s tax rate of $2.64 for each $100 of assessed value, the property tax would be
$2,370.72. In addition to the tax break, senior citizens are allowed to pay their property
tax in four equal payments. The quarterly payment due on this property would
be $592.68. Write a program that asks the user to input the actual value of a piece of
property and the current tax rate for each $100 of assessed value. The program
should then calculate and report how much annual property tax a senior homeowner
will be charged for this property and what the quarterly tax bill will be.
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
   
    float propVal; //property value
    float assVal; //assessed value
    float taxRate=2.64; //per $100
    float proTax; //Tax paid
    float taxBrk=5000; //5k tax break
    float aftTax, qrtBil;
    cout<<"Enter property value: ";cin>>propVal;
    assVal=propVal*.60;
    aftTax=assVal-taxBrk;
    proTax=(aftTax/100)*taxRate;
    qrtBil=proTax/4;
    cout<<setprecision(2)<<fixed;
    cout<<"assesment value: "<<assVal<<endl;
    cout<<"after tax break: "<<aftTax<<endl;
    cout<<"property tax is: "<<proTax<<endl;
    cout<<"quarterly tax bill: "<<qrtBil<<endl;
            
   
    
    
//Exit stage right
    return 0;
}