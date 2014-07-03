/* 
 * File:   main.cpp
 * Author: KrabbyPatty
 *
 * Created on July 1, 2014, 11:38 PM
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
    
    float loanPay, insrnc, gas, oil, tires, maint, monthEx, yearEx;
    
    cout<<"Insert monthly expenses for automobile then press Enter.\n";
    cout<<"Loan payment: ";cin>>loanPay;
    cout<<"Insurance: ";cin>>insrnc;
    cout<<"Gas: ";cin>>gas;
    cout<<"Oil: ";cin>>oil;
    cout<<"Tires: ";cin>>tires;
    cout<<"Maintenance: ";cin>>maint;
    cout<<setprecision(2)<<fixed;
    monthEx=loanPay+insrnc+gas+oil+tires+maint;
    yearEx=(loanPay+insrnc+gas+oil+tires+maint)*12;
    cout<<"Your monthly expense for operating your vehicle is $"<<monthEx<<endl;
    cout<<"Your yearly expense for operating your vehicle is $"<<yearEx<<endl;
    
//Exit stage right
    return 0;
}