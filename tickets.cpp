//Name: Chatarai Young
//Lab: Lab06
//Date: October 29, 2026
//Filename: tickets.cpp
//This code will determine theme park admission prices based on visitor age.

#include <iostream> //allows input and output
#include <iomanip> //Allows formatting decimal places
using namespace std;

int main () 
{
    //Declare variables
    int age;
    double price;

    //Ask the user to enter their age
    cout << "Enter the visitor's age:";
    cin >> age;


    //Determine admission category and price
    if (age < 12)
{

    //Children under 12 pay $15.00
   cout << "Admission category; Child" << endl;
   price = 15.00;
}
else if (age <=64)
{
    //Adults ages 12 through 64 pay $30.00
    cout << "Amission Category: Adult" << endl;
    price = 30.00;
}
else
{
    //Seniors age 65 and older pay $20.00
    cout << "Admission Category: Senior Citizen" << endl;
    price = 20.00;
}

    //Display price with exactly two decimal places
    cout << fixed << setpercison (2);
    cout << "Admission Price: $" << price << endl;

    // End the program
    return 0;
]

