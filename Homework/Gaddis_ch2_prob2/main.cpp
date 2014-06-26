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
int main(int argc, char** argv) {
    
    //variables
    float ecPrcntg=.62,
          coSales=4600000,
          ecSales=ecPrcntg*coSales;
    //answer
    cout<<fixed<<setprecision(2)<<ecSales<<endl;
    
//Exit stage right
    return 0;
}
