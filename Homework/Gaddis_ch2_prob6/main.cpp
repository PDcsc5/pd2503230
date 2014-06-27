/* 
 * File:   main.cpp
 * Author: Patrick De La Cruz
 * Created on June 26, 2014, 12:00 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
 double payAmount = 1700.00;
 double payPeriods = 26;
 double annualPay = payAmount * payPeriods;

 cout << "The employee earns $" << payAmount << " each pay period. \n";
 cout << "There are " << payPeriods << " pay periods in a year. \n";
 cout << "The annual pay is: $" << annualPay << endl << endl;

 system("pause");

 return 0;
}
