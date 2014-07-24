/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 23, 2014, 9:59 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//function prototypes
int numEmp();
int numDays(int);
float avrgDays(int,int);

int main() 
{
    int employees, total;
    float average;
    employees=numEmp();
    total=numDays(employees);
    average=avrgDays(employees,total);
    
    cout<<"Average number of absent days: "<<average<<endl;
}

int numEmp()
{
    int emps;
    cout<<"Enter number of employees: ";
    cin>>emps;
    
    if(emps<1)
    {
        cout<<"cannot have less than 1 employee";
                cin>>emps;
    }
    return emps;
}

int numDays(int emps)
{
    int total=0, leaves;
    
    for(int i=0;i<emps;i++)
    {
        cout<<"Enter leaves for employee: "<<i+1;
        cin>>leaves;
        total=total+leaves;
    }
    return total;
}

float avrgDays(int emps, int total)
{
    float avg=total/emps;
    return avg;
}