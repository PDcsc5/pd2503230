/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 12:52 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//function prototype
float kineticEnergy (float,float);


int main() 
{
    //variables
    float mass, velocity, KE;
    
    cout<<"Input mass: ";
    cin>>mass;
    
    cout<<"Input velocity: ";
    cin>>velocity;
    
    KE=kineticEnergy(mass,velocity);
    
    cout<<"Kinetic energy: "<<KE<<endl;
    
}

//function def
float kineticEnergy(float mass, float velocity)
{
    float KE;
    KE=(0.5*mass*velocity*velocity);
    return KE;
}

