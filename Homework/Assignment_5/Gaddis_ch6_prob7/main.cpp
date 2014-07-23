/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 1:01 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//function prototype
float celcius(float);

int main(int argc, char** argv) 
{
    //variables
    float F=0,C;
    
    cout<<"******************************"<<endl;
    cout<<"Fahrenheit\tCelcius"<<endl;
    cout<<"******************************"<<endl;
    
    for(int i=0;i<=20;i++)
    {
        C=celcius(F);
        cout<<F<<"\t\t"<<C<<endl;
        F++;
    }
}

//function definition
float celcius(float F)
{
    float temp;
    temp=((5.0/9.0)*(F-32));
    return temp;
}