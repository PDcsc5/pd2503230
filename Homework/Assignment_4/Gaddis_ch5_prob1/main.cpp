/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 9, 2014, 5:58 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
int x, y; // Initiate the counter

//Get integer
cout << "Enter a positive number ";
cin >> y;

cout << "\nNumber Number Summed\n";
cout << "----------------------------\n";

for (int i = 0; i < y; y--)
cout << y << "\t\t" << (x=y) << endl;

return 0;
}