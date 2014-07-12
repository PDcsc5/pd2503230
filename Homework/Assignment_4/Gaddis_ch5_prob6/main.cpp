/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 9, 2014, 7:45 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    float speed, time, disTrav=0;
    
    cout<<"Enter speed of vehicle in miles per hour: \n";
    cin>>speed;
    cout<<"Enter time it has traveles in hours: \n";
    cin>>time;
    
    if (speed>=0)
    {
        if(time>0)
        {
            cout<<"hour"<<"\t\t"<<"Distance Traveled\n";
            for(int i=1;i<=time;i++)
            {
                disTrav=speed*i;
                cout<<i<<"\t\t"<<disTrav<<endl;
            }
        }
        else
            cout<<" time cant be a negative 1\n";
    }
    else
        cout<<"speed cant be negative\n";

    return 0;
}

