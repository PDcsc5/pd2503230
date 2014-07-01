/* 
 * File:   main.cpp
 * Author: KrabbyPatty
 *
 * Created on June 30, 2014, 6:27 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    
    int number_of_pods, peas_per_pod, total_peas;
    cout<<"Hello\n";
    cout<<"Press return after entering a number. \n";
    cout<<"Enter the number of pods:\n";
    cin>>number_of_pods;
    cout<<"Enter the number of peas in a pod:\n";
    cin>>peas_per_pod;
    total_peas=number_of_pods/peas_per_pod;
    cout<<"If you have "<<number_of_pods<<" pea pods and \n";
    cout<<peas_per_pod<<" peas in each pod, then you have \n";
    cout<<total_peas<<" peas in all the pods.\n";
    cout<<"Good_bye\n";
    
//Exit stage right
    return 0;
}



