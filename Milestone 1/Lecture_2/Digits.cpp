/*
Counting number of digits in a number.
Input : 456
Output : 3
*/
#include <iostream>

using namespace std;

int main()
{
    int num, count = 0;
    cout<<"Enter Number : ";
    cin >> num;

    while(num!=0)
    {
        num = num / 10;
        count = count + 1;
    }
    cout << "Digits : " << count;
    return 0;
}
