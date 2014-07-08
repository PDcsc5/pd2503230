/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 7, 2014, 12:49 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    int R;
    cout<<"enter a number from 1-10";
    cin>>R;
    if(R<1||R>10)
    {
        cout<<"Input value out of range\n";
        cout<<"enter a number from 1-10";
        cin>>R;
    }
    switch (R)
    {       
            case 1: cout<<"I"<<endl;
            break;
            case 2: cout<<"II"<<endl;
            break;
            case 3: cout<<"III"<<endl;
            break;
            case 4: cout<<"IV"<<endl;
            break;
            case 5: cout<<"V"<<endl;
            break;
            case 6: cout<<"VI"<<endl;
            break;
            case 7: cout<<"VII"<<endl;
            break;
            case 8: cout<<"VIII"<<endl;
            break;
            case 9: cout<<"IX"<<endl;
            break;
            case 10: cout<<"X"<<endl;
            break;
    }
    
    return 0;
}

