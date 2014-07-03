/* 
 * File:   main.cpp
 * Author: KrabbyPatty
 *
 * Created on July 1, 2014, 8:52 PM
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
    
    /*40 cookies divided by 10 servings= 4 cookies per serving
     *300 calories per serving divided by 4 cookies =75 calories per cookie
     */
     
    int cky, calCky=75, calint;
    
    cout<<"Enter the amount of cookies eaten: ";cin>>cky;
    calint=cky*calCky;
    cout<<"Total calories consumed by eating "<<cky<<" cookies's is "<<calint;
    
    
//Exit stage right
    return 0;
}