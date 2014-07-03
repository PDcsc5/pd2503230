/* 
 * File:   main.cpp
 * Author: Patrick De La Cruz
 *
 * Created on July 2, 2014, 1:38 PM
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
    
    string Month; 
    float toCol, sales, staTax=.04, couTax=.02, state, county, toTax;
    cout<<"Enter month: ";cin>>Month;
    cout<<"Enter Total sales: ";cin>>toCol;
    sales=toCol/1.06;
    state=sales*staTax;
    county=couTax*sales;
    toTax=state+county;
    cout<<setprecision(2)<<fixed;
    cout<<"Month:  "<<Month<<endl;
    cout<<"---------------\n";
    cout<<"Total Collected: "<<setw(15)<<"$"<<toCol<<endl;
    cout<<"Sales:           "<<setw(15)<<"$"<<sales<<endl;
    cout<<"County Sales Tax:"<<setw(15)<<"$"<<county<<endl;
    cout<<"State Sales Tax: "<<setw(15)<<"$"<<state<<endl;
    cout<<"Total Sales Tax: "<<setw(15)<<"$"<<toTax<<endl;
    
    
            
    
    
//Exit stage right
    return 0;
}

