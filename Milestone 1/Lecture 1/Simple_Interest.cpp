#include <iostream>
using namespace std;

int main()
{
    int principle,rate,time;
    cout << "Enter Principle  : " << endl;
    cin >> principle;
    cout << "Enter Rate : " << endl;
    cin >> rate;
    cout << "Enter time : " << endl;
    cin >> time;
    int SI = 0;
   SI = (principle * rate * time) / 100;
   cout << "Simple Interest = " << SI;
    return 0;
}
