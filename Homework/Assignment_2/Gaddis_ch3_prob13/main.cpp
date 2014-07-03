/* 
 * File:   main.cpp
 * Author: rcc
 * Created on July 3, 2014, 11:10 AM
 * A county collects property taxes on the assessment value of property, which is 60 percent
of the property s actual value. If an acre of land is valued at $10,000, its assessment
value is $6,000. The property tax is then 64¢ for each $100 of the assessment value. The
tax for the acre assessed at $6,000 will be $38.40. Write a program that asks for the
actual value of a piece of property and displays the assessment value and property tax.
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
    
    float assVal, actVal, proTax, valPrc=.60;
    
    cout<<"Enter value of your property: ";cin>>actVal;
    assVal=actVal*valPrc;
    proTax=(assVal/100)*.64;
    cout<<setprecision(2)<<fixed;
    cout<<"Assesment value: $"<<assVal<<endl;
    cout<<"Property tax: $"<<proTax<<endl;
    
            
            
            
            
    
//Exit stage right
    return 0;
}