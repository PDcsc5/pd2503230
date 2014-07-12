/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on July 10, 2014, 11:00 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

/*
 * 
 */
int main()
{
	//create double variables to hold input from user
	double floors=0,
		count=0,
		rooms,
		rooms_total=0,
		occupied,
		occupied_total=0,
		unoccupied,
		number=0,
		percentage=0;

	//Welcome user and introduce program, then ask for input from user
	cout << "Welcome to Hector's Hotel Occupancy Calculator, Build 1.0\n";
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

	return 0;
}