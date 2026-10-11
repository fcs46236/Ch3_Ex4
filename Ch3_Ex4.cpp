/* Program File Name: Ch3_Ex4
Programmer: Frank Sonsini
Date: October 2026
Requirements:
Write a program that inputs the cost of a structure then calculates and displays a minimum insurance value of 80 percent of that cost
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double structure_cost;
    double min_percent = 80;
    double min_insurance_amount;

    cout << fixed << setprecision(2);

    cout << "What is the cost of your structure?" << endl;
    cin >> structure_cost;
    
    min_insurance_amount = (min_percent / 100) * structure_cost;
   
    cout << "A structure costing $" << structure_cost << " should be insured for a minimum of $" << min_insurance_amount << "." << endl;
    return(0);
}