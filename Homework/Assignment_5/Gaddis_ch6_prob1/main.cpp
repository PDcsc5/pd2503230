/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 23, 2014, 9:56 AM
 */

#include <iostream> 
#include <iomanip> // FOR FORMATING OUTPUT 
using namespace std; 

// function prototype
float calculateRetail(float, float);

int main() 
{ 
    float wholeSale, markPercent, total; 


    cout<<"Enter whole sale price: "<<endl; 
    cin >> wholeSale; 

    if(wholeSale<0) // Test for negative Numbers 
    { 
        cout<<"ERROR enter postive number" <<endl; 
        cin>>wholeSale; 
    } 

    cout<<"Enter Marked percent: "<<endl; 
    cin>>markPercent; 

    if(markPercent<0) 
    { 
        cout<<"ERROR enter postive number" <<endl; 
        cin>>markPercent; 
    } 
    markPercent=markPercent*.01; //so 50 converts to .50 % 
    total=calculateRetail(wholeSale, markPercent); // Function call 
    cout<<fixed<<setprecision(2); 
    cout<<"Retail Price is " <<total; 

    return 0; 
} 

float calculateRetail( float num1, float num2) 
{ 
    float answer;
    answer = (num1 * num2) + num1; 
    return answer; 
}
    

    
    


