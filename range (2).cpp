//Chatarai Young
//Lab: Lab04
//Due Date: October 8,2026
//Filename: range.cpp
//Description: This program will calculate how many miles a vehicle can be driven without having to refuel based on the capacity of the tank.
#include <iostream>
using namespace std;
int main()
{
 //Declare variables for the fuel tank and driving range
    double gallons;
    double milespergallon;
    double totalmiles;

//Ask the user for feul tank capacity
    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> gallons;
    cout << "Enter the miles per gallon: ";
    cin >> milespergallon;
    
//Calculate the total driving range
    totalmiles=gallons* milespergallon;

//Display the driving range3
cout << " The vehicle can be driven "
    << totalmiles
    << " miles without refueling." << endl;
return 0;
}
          
    
    
