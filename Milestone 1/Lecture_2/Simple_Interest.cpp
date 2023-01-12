#include <iostream>

using namespace std;

int main()
{
    int principle, rate, time;
    float simple_interest;
    cout << "Enter Principle, Rate, Time" << endl;
    cin >> principle >> rate >> time;
    
    simple_interest = (principle * rate * time)/100;
    cout<<"Simple_interest calculated is : " << simple_interest;
}
