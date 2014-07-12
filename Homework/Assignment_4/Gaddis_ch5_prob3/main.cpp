/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 9, 2014, 7:04 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    int year=1;
    float incPrYr=1.5, toInc=0;
    cout<<"year"<<"    "<<"increase in level\n";
    while(year<25)
    {
        toInc+=incPrYr;
        cout<<year<<"       "<<toInc<<" milimeters\n";
        year++;
    }

    return 0;
}

