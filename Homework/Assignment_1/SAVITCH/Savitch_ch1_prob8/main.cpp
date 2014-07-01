/* 
 * File:   main.cpp
 * Author: KrabbyPatty
 *
 * Created on June 30, 2014, 8:00 PM
 */


#include <cstdlib>
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    //declare variables
    int qtrs, dime, nick, qCnts, dCnts, nCnts,total;
    qCnts=25;
    dCnts=10;
    nCnts=5;
    cout<<"Input the amount and press ENTER.\n";
    cout<<"Quarters:";cin>>qtrs;
    cout<<"Dimes:";cin>>dime;
    cout<<"Nickels:";cin>>nick;
    total=(qtrs*qCnts)+(dime*dCnts)+(nick*nCnts);
    cout<<"The coins combined equals: "<<total<<"cents\n";
    
    
    
//Exit stage right
    return 0;
}
