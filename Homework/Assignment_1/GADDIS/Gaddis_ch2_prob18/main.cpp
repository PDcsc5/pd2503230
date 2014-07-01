/* 
 * File:   main.cpp
 * Author: Patrick De La Cruz
 * Created on June 26, 2014, 12:00 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    float cusSrvy, eDrnk, cDrnk;
    cusSrvy=12467;      //amount of customers surveyed
    eDrnk=.14f;          //14% amount who prefer energy drinks
    cDrnk=.64f;           //amount from the 14% who prefer citrus flavored
    
    cout<<"out of the 12,467 customers surveyed, "<<cusSrvy*eDrnk<<endl;
    cout<<"of them prefer energy drinks and of those "<<cusSrvy*eDrnk<<",\n";
    cout<<(cusSrvy*eDrnk)*cDrnk<<" of them prefer citrus flavored energy drink\n";
            
            
    
//Exit stage right
    return 0;
}
