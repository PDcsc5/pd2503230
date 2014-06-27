/* 
 * File:   main.cpp
 * Author: Patrick De La Cruz
 * Created on June 26, 2014, 12:00 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) 
{
    float
    ecPrcntg=.62, //percent
    coSales=4.6, //million
    ecSales=ecPrcntg*coSales; //average
    //answer
    cout<<"Predicted sales for East Coast dividion is $"<<ecSales<<"million"<<endl;
    
//Exit stage right
    return 0;
}
