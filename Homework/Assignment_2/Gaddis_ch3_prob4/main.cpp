/* 
 * File:   main.cpp
 * Author: KrabbyPatty
 *
 * Created on July 1, 2014, 7:13 PM
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
    
    string mon1, mon2, mon3;
    float rain1, rain2, rain3, avRain;
    
    cout<<"Input month and average rainfall for each month.\n";
    cout<<"Press Enter after each input.\n";
    cout<<"first month: ";cin>>mon1;
    cout<<"average rainfall for that mont: ";cin>>rain1;
    cout<<"second month: ";cin>>mon2;
    cout<<"average rainfall for that mont: ";cin>>rain2;
    cout<<"third month: ";cin>>mon3;
    cout<<"average rainfall for that mont: ";cin>>rain3;
    cout<<setprecision(2)<<fixed;
    avRain=(rain1+rain2+rain3)/3;
    cout<<"the average rainfall for "<<mon1<<", "<<mon2<<" and "<<mon3<<endl;
    cout<<"is "<<avRain<<" inches";
    
    
    
//Exit stage right
    return 0;
}