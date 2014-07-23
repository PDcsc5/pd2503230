/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 10:28 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//function prototypes
float getLength(), getWidth(), getArea(float,float);
void displayData(float,float,float);

int main(int argc, char** argv) 
{
    float length, width, area;
    length=getLength();
    width=getWidth();
    area=getArea(length,width);
    displayData(length,width,area);
    return 0;
}

float getLength()
{
    float L;//length
    cout<<"Enter length of rectangle: ";
    cin>>L;
    while(L<=0)
    {
        cout<<"Length must be a positive number:";
        cin>>L;
    }
    return L;
}

float getWidth()
{
    float W;
    cout<<"Enter width of rectangle: ";
    cin>>W;
    while (W<=0)
    {
        cout<<"Width must be a positive number:";
        cin>>W;
    }
    return W;
}

float getArea(float L, float W)
{
    float A;
    A=L*W;
    return A;
}

void displayData(float L,float W,float A)
{
    cout<<endl;
    cout<<"Length: "<<L<<endl;
    cout<<"Width: "<<W<<endl;
    cout<<"Area: "<<A<<endl;
}



    


