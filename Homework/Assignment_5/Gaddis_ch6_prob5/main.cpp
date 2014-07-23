/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 12:41 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//function prototype
float fallingDistance(float);


int main(int argc, char** argv) 
{
    //variables
    float distance, time;
    
    for(time=1;time<=10;time++)
    {
        distance=fallingDistance(time);
        cout<<"Distance at time interval "<<time;
        cout<<" in meters is: "<<distance<<endl;
    }
   
}

float fallingDistance (float time)
{
    float distance,g=9.8;
    distance=static_cast<float>(0.5*g*time*time);
    return distance;
}

