#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter Number : ";
    cin >> a >> b >> c;
    if(a + b > c && c + a > b && b + c > a)
    {
       cout<<"Yes"; 
    }
    else 
    {
        cout<<"No";
    }
    return 0;
}
