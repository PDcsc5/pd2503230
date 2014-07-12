/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 9, 2014, 7:23 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    float total;
    cout<<"Minutes   Calories Burned\n";
    
    for (int min=10;min<=30;min+=5)
    {
        total=3.9*min;
        
        cout<<min<<"\t\t"<<total<<endl;
    }
    

    return 0;
}

