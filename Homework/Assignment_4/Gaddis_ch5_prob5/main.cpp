/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 9, 2014, 7:32 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    float annual=2500;
    cout<<"year"<<"\t"<<"Increase\n";
    
    for(int i=1;i<=6;i++)
    {
        cout<<i<<"\t"<<annual<<endl;
        annual+=annual*0.04;
    }

    return 0;
}

