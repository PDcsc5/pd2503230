/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 7, 2014, 6:55 PM
 */

#include <cstdlib>
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
 double seconds, hour, day;
 hour = 3600;
 day = 86400;

 cout << "\n+++++++++++++++++++++++++++\n"
  << "        Time Calculator"
  << "\n+++++++++++++++++++++++++++\n\n";

 cout << "Enter the number of seconds: ";
 cin >> seconds;

 cout << setprecision(2) << fixed;
 if(seconds >= 86400)
 cout << "The seconds you entered = " << seconds/86400 << " days \n\n";
 else
 {
 if(seconds >= 3600)
 {
 cout << "The seconds you entered = " << seconds/3600 << " hours \n\n";
 }
 else
 {
 if(seconds >= 60)
 {
 cout << "The seconds you entered = " << seconds/60 << " minutes \n\n";
 }
 else
 {
 if(seconds < 60 && seconds > 0)
 {
 cout << "The seconds you entered = " << seconds << " seconds \n\n";
 }
 else
 {
 cout << "You must enter a number larger than 0 !! \n\n";
 }
 
 }
 }
 }

 

 return 0;
}