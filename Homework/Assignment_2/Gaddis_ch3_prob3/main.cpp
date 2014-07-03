/* 
 * File:   main.cpp
 * Author: KrabbyPatty
 *
 * Created on July 1, 2014, 6:45 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    float test1, test2, test3,test4,test5, avScor;
    cout<<"Please enter score for each test\n";
    cout<<"test1: ";cin>>test1;
    cout<<"test2: ";cin>>test2;
    cout<<"test3: ";cin>>test3;
    cout<<"test4: ";cin>>test4;
    cout<<"test5: ";cin>>test5;
    cout<<setprecision(2)<<fixed;
    avScor=(test1+test2+test3+test4+test5)/5;
    cout<<"Your average score is: "<<avScor<<endl;
    
//Exit stage right
    return 0;
}