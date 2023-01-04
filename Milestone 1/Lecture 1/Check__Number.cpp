#include <iostream>
using namespace std;
int main()
{
    int num1;
    cout << "Enter Number : ";
    cin >> num1;
    if(num1 >=1)
    {
       cout<<"1"; 
    }
    else if(num1 <0)
    {
        cout << "-1";
    }
    else 
    {
        cout<<"0";
    }
    return 0;
}
