/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 7, 2014, 1:16 PM
 */

#include<iostream>

using namespace std;

int main()
{
 int month, day, year;

 cout << "Enter a month (in numeric form): ";
 cin >> month;
 cout << "Enter a day (1-31): ";
 cin >> day;
 cout << "Enter a two-digit year: ";
 cin >> year;

 cout << "\n++++++++++++++++++++++++++++++++\n"
  << "        Magic Dates"
  << "\n++++++++++++++++++++++++++++++++\n";

 if(month * day == year)
 cout << "The date is MAGIC !! :) \n\n";
 else
 cout << "The date is NOT magic :( \n\n";



 return 0;
}