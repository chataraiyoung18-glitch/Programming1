//Chatarai Young
//Lab: Lab04
//Due Date: October 8,2026
//Filename: range.cpp
//Description: This program will calculate how many miles a vehicle can be driven without having to refuel based on the capacity of the tank.
#include <iostream>
using namespace std;

{
    //What are the variables for the fuel tank and driving range 
    double milespergallon;
    double totalmiles;
    //Ask the user for the fuel tank capacity
    cout<< "Enter the capacity of the fuel tank in gallons";
    gallons = 19;
    milespergallon = 40;
    cin>> milespergallon;
    // Calculate the total number of miles the vehicle can travel
    totalmiles= gallons* milespergallon;
    //Display the range of driving
    cout<< "The vehicle can be driven "
    << totalmiles
    <<" miles without refueling." << endl;
    return 0;3
}

