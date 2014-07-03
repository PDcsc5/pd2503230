/* 
 * File:   main.cpp
 * Author: KrabbyPatty
 *
 * Created on July 1, 2014, 5:00 PM
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
    
    float classA, classB, classC, toSale,
    priceA=15,
    priceB=12,
    priceC=9;
    cout<<"Input the amount of tickets sold for each class.\n";
    cout<<"Then press Enter.\n";
    cout<<"A: "; cin>>classA;
    cout<<"B: "; cin>>classB;
    cout<<"C: "; cin>>classC;
    cout<<setprecision(2)<<fixed;
    toSale=(priceA*classA)+(priceB*classB)+(priceC*classC);
    cout<<"Total sales equal: $"<<toSale;
            
    
    
//Exit stage right
    return 0;
}