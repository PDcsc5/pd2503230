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
int main(int argc, char** argv) 
{
    float shrs, shrsCst, stkPrc,com, comPaid, toAmnt;
    shrs=600;                   //amount of shares         
    stkPrc=21.77;               //price per share
    shrsCst=shrs*stkPrc;         //share cost
    com=.02;                    //2% commission 
    comPaid=shrsCst*com;      //commission paid 
    toAmnt=shrsCst+comPaid;       //total amount paid
    
    cout<<"amount paid for stocks: $"<<shrsCst<<endl;
    cout<<"amount of commission: $"<<comPaid<<endl;
    cout<<"total amount paid: $"<<toAmnt<<endl;

    
//Exit stage right
    return 0;
}