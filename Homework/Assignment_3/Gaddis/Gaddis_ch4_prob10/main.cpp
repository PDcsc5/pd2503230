/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 7, 2014, 8:57 PM
 */

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
 cout << "\n+++++++++++++++++++++++++++++\n"
  << "         Software Sales"
  << "\n+++++++++++++++++++++++++++++\n\n";

 int units;
 double subtotal, total;

 cout << "Enter number of units sold: ";
 cin >> units;

 cout << setprecision(2) << fixed;

 if(units > 0 && units < 10)
 {
 total = units * 99;
 cout << "The total is: $" << total << "\n\n";
 }
 else 
 {
 if(units >= 10 && units <= 19)
 {
 subtotal = (units * 99) * 0.20;
 total = (units * 99) - subtotal;
 cout << "The total is: $" << total << "\n\n";
 }
 else
 {
 if(units >= 20 && units <=49)
 {
 subtotal = (units * 99) * 0.30;
 total = (units * 99) - subtotal;
 cout << "The total is: $" << total << "\n\n";
 }
 else
 {
 if(units >= 50 && units <= 99)
 {
 subtotal = (units * 99) * 0.40;
 total = (units * 99) - subtotal;
 cout << "The total is: $" << total << "\n\n";
 }
 else
 {
 if(units >= 100)
 {
 subtotal = (units * 99) * 0.50;
 total = (units * 99) - subtotal;
 cout << "The total is: $" << total << "\n\n";
 }
 else
 {
 cout << "The number of units has to be greater than 0!! \n\n";
 }
 }
 }
 }
 }



 return 0;
}