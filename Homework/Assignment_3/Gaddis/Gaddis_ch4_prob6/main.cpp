/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 7, 2014, 6:48 PM
 */

#include <cstdlib>
#include<iostream>

using namespace std;

int main()
{
 double mass, weight;

 cout << "\n+++++++++++++++++++++++++++++\n"
  << "        Mass and Weight"
  << "\n+++++++++++++++++++++++++++++\n";

 cout << "Enter an object's mass (in Kilograms): ";
 cin >> mass;

 weight = mass * 9.8;

 if(weight > 1000)
 {
 cout << "The mass is: " << weight << " newtons \n\n";
 cout << "The object's mass is TOO heavy :( !!\n\n";
 }
 else if(weight < 10)
 {
 cout << "The mass is: " << weight << " newtons \n\n";
 cout << "The object's mass is too Light !! \n\n";
 }
 else if(weight >=10 && weight <=1000)
 {
 cout << "The mass is: " << weight << " newtons \n\n";
 }



 return 0;
}