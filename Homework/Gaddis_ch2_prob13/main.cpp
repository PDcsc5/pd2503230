#include <cstdlib>
#include <iostream>
using namespace std;

//User Defined Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {

    float prof, cost, poProf, price;
    prof=.40;           //40%profit
    cost=12.67;         //$
    poProf=prof*cost;   //potential profit    
    price=poProf+cost;  //selling price
    
    cout<<"the selling price for a circiut board would be \n";
    cout<<"$"<<price<<".";
            
    
//Exit stage right
    return 0;
}
