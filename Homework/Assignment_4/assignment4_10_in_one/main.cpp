/* 
 * File:   main.cpp
 * Author: %<Patrick De La Cruz>%
 *
 * Created on July 11, 2014, 3:01 PM
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
    //case 3 variables   
    int year=1;
    float incPrYr=1.5, toInc=0;
    //case 5 variables
    float annual=2500;
    //case 8 variables
      double floors=0,
		count=0,
		rooms,
		rooms_total=0,
		occupied,
		occupied_total=0,
		unoccupied,
		number=0,
		percentage=0;
    //case 9 variables
      float yrs, rFall, avrg=0, totMnth=0, totAvrg=0,totrFall=0,total;
    
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
        cout<<"1.Sum of Numbers \n";
        cout<<"2.Characters of the ASCII code \n";
        cout<<"3.Ocean Levels \n";
        cout<<"4.Calories Burned \n";
        cout<<"5.Membership Fees Increase \n";
        cout<<"6.Distance Traveled \n";
        cout<<"7.Pennies for Pay \n";
        cout<<"8.Hotel Occupancy \n";
        cout<<"9.Average Rainfall \n";
        cout<<"10.Quit \n";
        
        cout<<"Enter a choice: ";cin>>choice;
        
        switch(choice)
        {
            case 1:
                int sum, days; // Initiate the counter

                //Get integer
                cout << "Enter a positive number ";
                cin >> days;

                cout << "\nNumber Number Summed\n";
                cout << "----------------------------\n";

                for (int i = 0; i < days; days--)
                cout << days << "\t\t" << (sum+=days) << endl;

                break;
            case 2:
                for(unsigned char c=0;c<=127;c++)
                {
                         cout<<c;
                        if(c%16==15)
                         cout<<endl;
                }
                break;
            case 3:
                
                cout<<"year"<<"    "<<"increase in level\n";
                while(year<25)
                {
                        toInc+=incPrYr;
                        cout<<year<<"       "<<toInc<<" milimeters\n";
                        year++;
                }
                break;
            case 4:
                float total;
                cout<<"Minutes   Calories Burned\n";
    
                for (int min=10;min<=30;min+=5)
                {
                        total=3.9*min;
        
                        cout<<min<<"\t\t"<<total<<endl;
                }
                break;
            case 5:
                cout<<"year"<<"\t"<<"Increase\n";
    
                for(int i=1;i<=6;i++)
                {
                         cout<<i<<"\t"<<annual<<endl;
                        annual+=annual*0.04;
                }
                break;
            case 6:
                int totDays;
                float pay, totPay;
    
                do
                {
                        cout<<"enter number of days: ";cin>>totDays;
        
                        if (totDays<0||totDays>31)
                        cout<<"number of days must be greater than\n";
                        cout<<"0 and must be 31 or less\n";

                }
                while(totDays<0);
                cout<<"Day      Pay\n";
                pay=.01;
                cout<<setprecision(2)<<fixed;
    
                for(int i=1;i<=totDays;i++)
                {
                         cout<<i<<"  $"<<pay<<endl;
                         totPay+=pay;
                            pay+=pay;
                }
                cout<<"total pay for"<<totDays<<"days is "<<totPay;
                break;
            case 7:
                int totDays7;
                float pay7, totPay7;
    
                do
                {
                        cout<<"enter number of days: ";cin>>totDays7;
        
                        if (totDays7<0||totDays7>31)
                        cout<<"number of days must be greater than\n";
                        cout<<"0 and must be 31 or less\n";

                }
                while(totDays7<0);
                cout<<"Day      Pay\n";
                pay7=.01;
                cout<<setprecision(2)<<fixed;
    
                for(int i=1;i<=totDays7;i++)
                {
                        cout<<i<<"  $"<<pay7<<endl;
                        totPay7+=pay7;
                        pay7+=pay7;
                }
                cout<<"total pay for"<<totDays7<<"days is "<<totPay7;
                break;
            case 8:
              

                //Welcome user and introduce program, then ask for input from user
                
                cout << "How many floors in your hotel?\n";
                cin >> floors;

		while (floors < 1)//if user enters 0 or less floors, error
		{
			cout << "ERROR: You cannot enter 0 or less for the number of floors!\n";
			cout << "PLEASE TRY AGAIN.\n";
			cin >> floors;
		}
		while (number < floors)//loop to ask for input from user, once for each floor
		{
			//add one to count number during each loop
			count++;

			//if count == 13 (13th floor) we will stop loop, and start over at top
			if (count == 13)
			{
				//if count is equal to 13, give the following message, then skip to top
				cout <<"We will be skipping floor #13, as is common in most hotels.\n";
				continue;
			}
                        
                        
			//asks user to enter number of floors
			cout <<"How many rooms on floor number " << count << "? (cannot be less than 10)\n";
			cin >> rooms;
			
                        
                        if (rooms <10)//if user enters less than 10 rooms per floor- error
			{		
				cout <<"ERROR: Cannot be less than 10 rooms! Please try again.\n";
				cin >> rooms;
			}
                        
                        
			//asks users how many rooms in floor
			cout <<"How many rooms are occupied on this floor?\n";
			cin >> occupied;
                        
                        
			while (occupied > rooms)
			{		
				//if user enters more occupied than rooms on floor, error
				cout <<"ERROR: You cannot have more occupied rooms than total rooms on floor! Please try again.\n";
				cin >> occupied;
			}
                        
                        
			//add one to number during each loop
			number++;
			//keep running total of rooms_total and occupied_total
			rooms_total+=rooms;
			occupied_total+=occupied;
		}

                //our totals for the solution
                unoccupied = rooms_total - occupied_total;
                percentage = occupied_total / rooms_total *100;

                //shows user the solutions
                cout <<"Total Floors: " << floors << endl;
                cout <<"Total Rooms: " << rooms_total << endl;
                cout <<"Total Occupied: " << occupied_total << endl;
                cout <<"Total Unoccupied: " << unoccupied << endl;
                cout <<"Percentage of rooms occupied is " << fixed << setprecision(2) << percentage << "%.\n";

                //thank user for using program
                cout <<"Thank You for using my program.\n";
                break;
                
            case 9:
                
    
                cout<<"enter the number of years: ";cin>>yrs;
    
                for(int x=0;x<yrs;x++)
                {
                        total=0;
                        for (int y=1;y<=12;y++)
                        {
                                cout<<"enter the inches of rain for months number "<<y<<endl;
                                cin>>rFall;
                                totMnth+=1;
                                total+=rFall;
                        }
                        totrFall=totrFall+total;
                        avrg=(totrFall/totMnth);
                
                }
                cout<<"total months: "<<totMnth<<endl;
                cout<<"total rainfall: "<<totMnth<<endl;
                cout<<"average rain fall over "<<yrs<<" year's: "<<avrg<<endl;
                break;

            case 10:
                exit(0);
                defualt:
            
                cout<<"Enter a correct choice from the menu \n";
                selection=false;                
        }
    
        selection=true;
        
    }
    while(selection);

    return 0;
    
}

