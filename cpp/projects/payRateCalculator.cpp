#include <iostream>
using namespace std;

double calculateOvertime(int totalHours, double rate);

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

    double overtimePay = calculateOvertime(hours, rate);
    cout << "Total Pay per week with Overtime is " << overtimePay << endl;
}

double calculateOvertime(int totalHours, double rate) {
    if (totalHours <= 40) {
        return totalHours;
    }
    int overtimeHours = totalHours - 40;
    return (totalHours * rate) + (overtimeHours * rate * 1.5);
}

