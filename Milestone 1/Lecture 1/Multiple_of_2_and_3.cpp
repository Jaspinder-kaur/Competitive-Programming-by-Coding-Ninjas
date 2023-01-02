
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter Number  : " << endl;
    cin >> number;
    int Product;
    if(number%2==0)
    {
        Product = number * 2;
        cout<<"Product of even number : " << Product;
    }
    else
    {
        Product = number * 3;
        cout<<"Product of odd number : " << Product;
    }
    return 0;
}
