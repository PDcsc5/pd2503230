/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 9, 2014, 6:48 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    for(unsigned char c=0;c<=127;c++)
    {
        cout<<c;
    if(c%16==15)
        cout<<endl;
    }
    return 0;
}

