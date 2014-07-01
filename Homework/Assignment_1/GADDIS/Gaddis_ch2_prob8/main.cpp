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
    
    float
    poi1=12.95,     //price of each item purchased
    poi2=24.95,
    poi3=6.95,
    poi4=14.95,
    poi5=3.95,
    subTotal=poi1+poi2+poi3+poi4+poi5,
    tax=subTotal*.06,
    total=subTotal+tax;
    
    cout<<"item-1: $"<<poi1<<endl;
    cout<<"item-2: $"<<poi2<<endl;
    cout<<"item-3: $"<<poi3<<endl;
    cout<<"item-4: $"<<poi4<<endl;
    cout<<"item-5: $"<<poi5<<endl;
    cout<<"SubTotal: $"<<subTotal<<endl;
    cout<<"Sales Tax: $"<<tax<<endl;
    cout<<"Total bill: $"<<total<<endl;
//Exit stage right
    return 0;
}