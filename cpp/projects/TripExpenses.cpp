#include <iostream>;
using namespace std;

double calculateExpenses(
	double miles, double costPerGallon, double avgMilesPerGallon,
	double parkingFees, double tolls);

int main() {
	double miles, costPerGallon, avgMilesPerGallon, parkingFees, tolls;
	cout << "How many miles is the trip? ";
	cin >> miles;
	cout << "What is the average cost per gallon? ";
	cin >> costPerGallon;
	cout << "What is your average miles per gallon? ";
	cin >> avgMilesPerGallon;
	cout << "How much will you spend on parking? ";
	cin >> parkingFees;
	cout << "How much will you spend on tolls? ";
	cin >> tolls;
	double totalExpenses = calculateExpenses(miles, costPerGallon, avgMilesPerGallon, parkingFees, tolls);

	cout << "You're expected trip expenses are $" << totalExpenses << endl;
}

double calculateExpenses(
	double miles, double costPerGallon, double avgMilesPerGallon,
	double parkingFees, double tolls) {
	double gallonsNeeded = miles / avgMilesPerGallon;
	double gasCost = gallonsNeeded * costPerGallon;

	return gasCost + parkingFees + tolls;
}