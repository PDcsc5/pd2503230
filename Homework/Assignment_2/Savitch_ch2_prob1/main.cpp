/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 7, 2014, 12:41 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main() 
{

    float metricton=35273.92;
    float ounces; 
    float weight; 
    float boxes;
    char choice;
    do
    {
    
        
            cout<<"enter wight of package in ounces: ";cin>>ounces;
            weight= ounces/metricton;
            cout<<"weight of a box of cereal in metric ton is: "<<weight<<endl;
            boxes= metricton/ounces;
            cout<<"number of boxes that equal 1 metric ton is: "<<boxes<<endl;
            cout<<"press y or Y to continue";
            cin>>choice;
            cin.get();
    }    while (choice=='y'||choice=='Y');
                    
    
    
}
    