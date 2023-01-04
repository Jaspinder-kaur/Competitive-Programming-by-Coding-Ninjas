#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter Sides of Triangle : ";
    cin >> a >> b >> c;
    if(a + b > c || c + a > b || b + c > a)
    {
       cout<<"Yes"; 
    }
    else 
    {
        cout<<"No";
    }
    return 0;
}
