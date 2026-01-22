#include <iostream>
using namespace std;

int main()
{
    int hours; 
    double rate;
	cout << "Enter number of hours worked: ";
    cin >> hours;
    cout << "Enter the pay rate as a decimal: ";
    cin >> rate;
    double payment = hours * rate;
    double paymentPerMonth = payment * 4;
    double paymentAcrossInternship = paymentPerMonth * 3 * 0.8;

    cout << "Payment is: $" << payment << endl;
	cout << "Payment per month is: $" << paymentPerMonth << endl;
	cout << "Payment across internship is: $" << paymentAcrossInternship << endl;
    cout << "Gabriel Paniagua!\n";
}

