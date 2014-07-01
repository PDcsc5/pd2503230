/* 
 * File:   main.cpp
 * Author: Patrick De La Cruz
 * Created on June 26, 2014, 12:00 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    float acre, land, conversion;
    acre = 43560;  //1 acre = 43560 sq ft
    land = 389767; // 389767 sq 
    conversion = land / acre;

 cout<<land <<"sq ft = "<<conversion<<" acres \n\n";

 system("pause");

 return 0;
}
