#include <iostream>
using namespace std;

int main()
{
    int hours = 40;
    double rate = 52;
	double payment = hours * rate;
    double paymentPerMonth = payment * 4;
	double paymentAcrossInternship = paymentPerMonth * 3;
    

    cout << "Payment is: $" << payment << endl;
	cout << "Payment per month is: $" << paymentPerMonth << endl;
	cout << "Payment across internship is: $" << paymentAcrossInternship << endl;
    cout << "Gabriel Paniagua!\n";
}

