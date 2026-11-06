//Name: Chatarai Young 
//Lab:07
//Due Date: November 05, 2026
//Filename: order.cpp
//Description: This program will allow customers to select a lunch menu item, enter a quantity, and calulate the total cost of their order.
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
  //Delcare variables to store the customer's selection and order.
  int selection;
  int quantity;
  string itemname;
  double price;
  double total;

  //Display the lunch menu and its prices.
  cout << "Lunch Menu" << endl;
  cout << "1. Hamburger           $7.50" << endl;
  cout << "2. Chicken Sandwhich   $8.25" << endl;
  cout << "3. Taco Salad          $9.00" << endl;

//Ask customer to select menu item.
cout << "/Enter your selection: ";
cin >> selection;

//Use a switch statement to determine the selected item and its price.
switch (selection)
{
case 1:
  itemname = "Hamburger";
  price = 7.50;
  break;

case 2:
  itemname = "Chicken Sandwhich";
  price = 8.25;
  break;

case 3:
  itemname = "Taco Salad";
  price = 9.00;
  break;

case 4:
itemname = "Baked Potato";
price = 6.75;
  break;

default: 
  cout << "Invalid menu selection." << endl;
  return 0;

}
//Ask the customer how many items they want to order.
cout << "Enter the quantity: ";
cin >> quantity;

//Calculate the total cost of the order.
total = price * quantity;

//Display the order with tow decimal places.
cout << fixed << setprecision (2);

cout << "Item: " << itemname << endl;
cout << "Price:$" << price << endl;
cout << "Quantity: " << quantity << endl;
cout << "Total: $" << total << endl;

return 0;
  
}
