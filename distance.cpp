// Chatarai Young
//Lab05_part01
//Due Date: 10/15/2026
//Filename: distance.cpp
//Description: This program calculates the distance between two points and displays two digits after the decimal.
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    double x1, y1, x2, y2;
    cout << "Enter x1 and y1: ";
    cin >> x1 >> y1;
    cout << "Enter x2 and y2: ";
    cin >> x2 >> y2;
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "The distance between the two points is: " << fixed << setprecision(2) << distance << endl;
    return 0;
}
