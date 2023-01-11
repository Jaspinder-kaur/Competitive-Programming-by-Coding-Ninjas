#include <iostream>
using namespace std;
int main()
{
    int side_a, side_b, side_c;
    cout << "Enter Sides : ";
    cin >> side_a >> side_b >> side_c;
    if(side_a == side_b && side_a == side_b)
    {
     cout<<"1";   
    }
    else if(side_a == side_b || side_a == side_c || side_c == side_b)
    {
        cout<<"0";
    }
    else
    {
        cout<<"-1";
    }
    return 0;
}
