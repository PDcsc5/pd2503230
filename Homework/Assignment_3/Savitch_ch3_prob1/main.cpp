/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 7, 2014, 10:13 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) 
{

    char choice1, choice2, choice, go;
    do
    {
        for(int i=0; i<2; i++)
    {
        do
        {
            cout<<"enter your choice P,R, or S \n";
            cin<<choice;
        }while (choice !='p' && choice !='P' && choice !='r'        
               && choice !='R' && choice !='S' && choice!='s');
        if(i==0)
        {
            choice1=choice;
        }
        else if(i==1)
        {
            choice2=choice;
        }
        }
        if(choice1=choice2)
        {
            cout<<"game has ended in draw\n";
        }
        else
        {
            if (choice1=='p'||choice =='P')
            {
                if (choice2=='s'||choice2=='S')
                {
                    cout<<"scissors cut paper, player 2 wins\n";
                }
                else
                {
                    cout<<" paper covers rock player 1 wuns\n";
                }
            }
            if (choice1=='s'||choice1=='s')
            {
                if (choice2=='p'||choice2='p')
                {
                    cout<<"scissor cuts paper player 1 wins\n";
                }
                else
                {
                    cout<<"rock beats scissor player 2 wins\n";
                }
            }
            if (choice=='r'||choice=='r')
            {
                if (choice2=='s'||choice2=='r')
                {
                    cout<<"rock breaks scissor player 1 wins";
                }
                else
                {
                    cout<"paper covers rock player 2 wins";
                }
            }
        }
        cout<<" \n to repeat press y or Y\n";
        cin>>go;
    }while (go=='y'||go=='Y');
    
                
          
   
}

