/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 11:02 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

//Function Prototypes
float getSales (int);
void findHighest(float,float,float,float);

//Main function
int main() 
{
    float salesNE, salesSE, salesNW, salesSW;
    salesNE=getSales(1);
    salesSE=getSales(2);
    salesNW=getSales(3);
    salesSW=getSales(4);
    
    findHighest(salesNE, salesSE, salesNW, salesSW);
            
}

float getSales(int division)
{
    float tempSales;
    switch(division)
    {
        case 1:cout<<"NE-Enter quarterly sales: ";
        break;
        case 2:cout<<"SE-Enter quarterly sales: ";
        break;
        case 3:cout<<"NW-Enter quarterly sales: ";
        break;
        case 4:cout<<"SW-Enter quarterly sales: ";
        break;
    }
    
    tempSales=-1;
    while(tempSales<0.0)
    {
        cin>>tempSales;
        if(tempSales<0.0)
        cout<<"Cannot input negative numbers.";
    }
    
    return tempSales;
}

void findHighest(float salesNE, float salesSE, float salesNW, float salesSW)
{
    if(salesSE >= salesNE&&salesSE >= salesNW&&salesSE >= salesSW)
    {
        cout<<"Highest sales is SE with: $"<<salesSE<<endl;
    }
    if(salesNE >= salesSE&&salesNE >= salesNW&&salesNE >= salesSW)
    {
        cout<<"Highest sales is NE with: $"<<salesSE<<endl;
    }
    if(salesSW >= salesNE&&salesSW >= salesNW&&salesSW >= salesSE)
    {
        cout<<"Highest sales is SW with: $"<<salesSE<<endl;
    }
    if(salesNW >= salesNE&&salesNW >= salesSE&&salesNW >= salesSW)
    {
        cout<<"Highest sales is NW with: $"<<salesSE<<endl;
    }
}

