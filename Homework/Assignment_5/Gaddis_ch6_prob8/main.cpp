/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 1:11 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//function prototype
void coinToss();

int main(int argc, char** argv) 
{
    //variables
    int number;
    cout<<"Enter number of tosses: ";
    cin>>number;
    
    for(int i=0;i<number;i++)
    {
        coinToss();
    }
}

void coinToss()
{
    int num;
    num=1+rand()%2;
    if(num==1)
        cout<<"Heads"<<endl;
    else
        cout<<"Tails"<<endl;
}