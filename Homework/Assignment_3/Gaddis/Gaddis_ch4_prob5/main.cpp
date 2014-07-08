/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 7, 2014, 6:37 PM
 */


#include<iostream>
#include<cmath>

using namespace std;

int main()
{
 double weight, height;
 int BMI;

 cout << "\n++++++++++++++++++++++++++++++++++++\n"
  << "            Body Mass Index"
  << "\n++++++++++++++++++++++++++++++++++++\n";

 cout << "Enter your weight (in pounds): ";
 cin >> weight;
 cout << "\nEnter your height (in inches): ";
 cin >> height;

 BMI = (weight * 703) / (height * height);
 cout <<"your BMI is "<<BMI<<endl;
 if(BMI < 18.5)
 cout << "You are underweight!! Eat More!! \n\n";

 if(BMI >= 18.5 && BMI <= 25)
 cout << "You are in optimal shape!! Good Work! \n\n";

 if(BMI > 25)
 cout << "You are overweight!! Eat Less!! \n\n";




 return 0;
}