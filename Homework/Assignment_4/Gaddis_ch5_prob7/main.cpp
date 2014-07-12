/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 9, 2014, 8:01 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    int totDays7;
    float pay7, totPay7;
    
    do
    {
                cout<<"enter number of days: ";cin>>totDays7;
        
        if (totDays7<0||totDays7>31)
            cout<<"number of days must be greater than\n";
            cout<<"0 and must be 31 or less\n";

    }
    while(totDays7<0);
    cout<<"Day      Pay\n";
    pay7=.01;
    cout<<setprecision(2)<<fixed;
    
    for(int i=1;i<=totDays7;i++)
    {
        cout<<i<<"  $"<<pay7<<endl;
        totPay7+=pay7;
        pay7+=pay7;
    }
    cout<<"total pay for"<<totDays7<<"days is "<<totPay7;

    return 0;
}

