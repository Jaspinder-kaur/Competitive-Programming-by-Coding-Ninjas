#include <iostream>
using namespace std;
int main()
{
    int num, sum=0,next_num;
    cout << "Enter Number : ";
    cin >> num;
    for(next_num =1; next_num <= num; next_num++)
    {
        sum = sum + next_num;
    }
    cout << "Sum of 1 to N : "  << sum << endl;
    return 0;
}
