/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 1:27 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

//function prototype
float presentValue(float F, float r, float n);

//main
int main(int argc, char** argv) 
{
    float F,n,r;
    
    cout<<"Enter future value: ";
    cin>>F;
    cout<<"Enter annual interest rate: ";
    cin>>r;
    cout<<"Enter number of years: ";
    cin>>n;
    
    float p=presentValue(F,r,n);
    cout<<p<<endl;
}

//function definition
float presentValue(float F, float r, float n)
{
    float p;
    p=F/ (pow((1+r),n));
    return p;
}