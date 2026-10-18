//Name: Chatarai Young
//Lab05_part02
//Duedate: 10/15/2026
//Filename:points.txt
//Description: This code will show the distance between two points (2,3) and (8,11) using distance formula.
#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
    //Declare variables to store the coordinates
    double x1, y1, x2, y2;
    //Open the input file and output file
    ifstream infile("points.txt");
    ofstream outfile("distance.out");
    //Read the coordinates from the input file
    infile >> x1 >> y1 >> x2 >> y2;
    //Calculate the distance between the two points
    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    //Write the distance to the output file with two decimal places
    outfile << fixed << setprecision(2) << distance;    
        infile.close();
        outfile.close();
        return 0;
}

