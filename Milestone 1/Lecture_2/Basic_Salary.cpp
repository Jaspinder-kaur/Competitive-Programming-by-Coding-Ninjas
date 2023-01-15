#include <iostream>
using namespace std;
int main()
{
    int gross_pay, basic_pay, da, hra;
    cout << "Enter Basic Salary" << endl;
    cin >> basic_pay;
    da = 0.4 * basic_pay;
    hra = 0.2 * basic_pay;
    gross_pay = basic_pay + hra + da;
    cout << "Dearness Allowance : " << da << endl;
    cout << "House Rent Allowance : " << hra << endl;
    cout << "Gross Pay : " << gross_pay << endl;
    return 0;
}
