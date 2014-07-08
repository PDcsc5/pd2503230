/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 7, 2014, 8:43 PM
 */

#include<iostream>
#include<iomanip>
#include<ctime>
#include<cstdlib>


using namespace std;

int main()
{
 cout << "\n+++++++++++++++++++++++++++++++++++\n"
  << "           Math Tutor"
  << "\n+++++++++++++++++++++++++++++++++++\n\n";

 srand(time(0));
 float number1, number2, sum, answer;
 int seed = 999;

 number1 = 100 + rand() % seed;
 number2 = 100 + rand() % seed;

 sum = number1 + number2;

 cout << setw(5) << number1 << endl;
 cout << setw(5) << number2 << " + \n";
 cout << setw(5) << "------\n\n";

 cout << "Enter the answer: ";
 cin >> answer;

 if(answer == sum)
 cout << "Congratulations, the answer is correct! \n\n";
 else
 cout << "Incorrect answer!! The correct answer is: " << sum << "\n\n";


 return 0;
}
