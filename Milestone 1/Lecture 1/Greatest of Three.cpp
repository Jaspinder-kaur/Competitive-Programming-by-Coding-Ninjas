#include <iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout << "Enter Three Numbers : ";
    cin >> num1 >> num2 >> num3;
    if(num1 >= num2 && num1 >= num3)
    {
       cout<<"Number 1 is Greatest"; 
    }
    else if(num2 >= num1 && num2 >= num3)
    {
        cout << "Number 2 is Greatest";
    }
    else 
    {
        cout<<"Number 3 is Greatest";
    }
    return 0;
}
