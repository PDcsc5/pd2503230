/* 
 * File:   main.cpp
 * Author: rcc
 *Created on July 10, 2014, 1:40 PM
 * Write a program that uses nested loops to collect data and calculate the average rain-
fall over a period of years. The program should first ask for the number of years. The
outer loop will iterate once for each year. The inner loop will iterate twelve times,
once for each month. Each iteration of the inner loop will ask the user for the inches
of rainfall for that month.
After all iterations, the program should display the number of months, the total
inches of rainfall, and the average rainfall per month for the entire period.
Input Validation: Do not accept a number less than 1 for the number of years. Do not
accept negative numbers for the monthly rainfall.
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
    float yrs, rFall, avrg=0, totMnth=0, totAvrg=0,totrFall=0,total;
    
    cout<<"enter the number of years: ";cin>>yrs;
    
    for(int x=0;x<yrs;x++)
    {
        total=0;
        for (int y=1;y<=12;y++)
        {
            cout<<"enter the inches of rain for months number "<<y<<endl;
            cin>>rFall;
            totMnth+=1;
            total+=rFall;
        }
        totrFall=totrFall+total;
        avrg=(totrFall/totMnth);
        
    }
    cout<<"total months: "<<totMnth<<endl;
    cout<<"total rainfall: "<<totMnth<<endl;
    cout<<"average rain fall over "<<yrs<<" year's: "<<avrg<<endl;

    return 0;
}

