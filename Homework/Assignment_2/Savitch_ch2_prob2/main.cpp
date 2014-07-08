/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 7, 2014, 1:35 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    float wkm, wm, wd, amnt;
    char choice;
    do
    {
        cout<<"enter wight of artificial sweetener thats can kill mouse";
        cin>>wkm;
        cout<<"enter weight of mouse: ";
        cin>>wm;
        cout<<"enter min weight of dieter: ";
        cin>>wd;
        amnt=((wkm*wd)/(wm*.001));
        cout<<amnt<<endl;
        cin>>choice;
    }
        while (choice=='y'||choice=='Y');
        
        
                
    }
  
    
//Exit stage right
    


