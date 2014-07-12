/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 9, 2014, 10:46 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{
    int maxRange=100, ranNum1, ranNum2, choice;
    float result, answer;
    bool selection=true;
    
    do
    {
        unsigned seed=time(0);
        srand(seed);
        ranNum1=1+rand()%maxRange;
        ranNum2=1+rand()%maxRange;
        
        cout<<"----Menu----\n";
        cout<<"1.Addition \n";
        cout<<"2.Subtraction \n";
        cout<<"3.Multiplication \n";
        cout<<"4.Division \n";
        cout<<"5.Quit \n";
        
        cout<<"Enter a choice: ";cin>>choice;
        
        switch(choice)
        {
            case 1:
                cout<<"Addition:\n";
                cout<<setw(5)<<ranNum1<<endl;
                cout<<"+"<<setw(3)<<ranNum2<<endl;
                result=ranNum1+ranNum2;
                break;
            case 2:
                cout<<"Subtraction:\n";
                cout<<setw(5)<<ranNum1<<endl;
                cout<<"-"<<setw(3)<<ranNum2<<endl;
                result=ranNum1-ranNum2;
                break;
            case 3:
                cout<<"Multiplication:\n";
                cout<<setw(5)<<ranNum1<<endl;
                cout<<"*"<<setw(3)<<ranNum2<<endl;
                result=ranNum1*ranNum2;
                break;
            case 4:
                cout<<"Division:\n";
                cout<<setw(5)<<ranNum1<<endl;
                cout<<"/"<<setw(3)<<ranNum2<<endl;
                result=ranNum1/ranNum2;
                break;
            case 5:
                exit(0);
                defualt:
            
                cout<<"Enter a correct choice from the menu \n";
                selection=false;                
        }
        if(selection)
        {
            cout<<"enter answer: ";cin>>answer;
            if(answer==result)
                cout<<"Your answer is correct!\n";
            else
                cout<<"Your answer is wrong...\n";
        }
        selection=true;
        
    }
    while(selection);

    return 0;
    
}

