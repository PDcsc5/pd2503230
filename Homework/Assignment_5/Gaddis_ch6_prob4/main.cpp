/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 11:54 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//function prototype
int getNumAccidents(char*);
void findLowest(float, float, float, float, float);

int main()
{
    //variables
    float north, south, east, west, central;
    
    north = getNumAccidents("north");
    south = getNumAccidents("south");
    east = getNumAccidents("east");
    west = getNumAccidents("west");
    central = getNumAccidents("Central");
    findLowest(north, south, east, west, central);
}

int getNumAccidents(char *division)
{
    int accidents;
    do
    {
        cout<<"Enter accidents in "<<division<<" division: ";
        cin>>accidents;
        if(accidents<0)
            cout<<"cannot be negative number.";
    }
    while (accidents<0);
    return accidents;
}


void findLowest(float north, float south, float east, float west, float central)
{
    if(east<=north&&east<=west&&east<=south&&east<=central)
    {
        cout<<"Lowest accidents in east division "<<east<<endl;
    }
    if(north<=east&&north<=west&&north<=south&&north<=central)
    {
        cout<<"Lowest accidents in north division "<<north<<endl;
    }
    if(west<=north&&west<=east&&west<=south&&west<=central)
    {
        cout<<"Lowest accidents in west division "<<west<<endl;
    }
    if(south<=north&&south<=west&&south<=east&&south<=central)
    {
        cout<<"Lowest accidents in south division "<<south<<endl;
    }
    if(central<=north&&central<=west&&central<=east&&central<=south)
    {
        cout<<"Lowest accidents in central division "<<central<<endl;
    }
}