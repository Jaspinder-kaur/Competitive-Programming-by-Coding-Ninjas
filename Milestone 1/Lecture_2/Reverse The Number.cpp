/*
Reversing the number
Input : 954
Output : 459
*/
#include <iostream>

using namespace std;

int main()
{
    int num, rev = 0, temp;
    cout<<"Enter Number : ";
    cin >> num;

    while(num!=0)
    {
        int last = num % 10;
        num = num / 10;
        rev = rev * 10 + last; 
    }
  
    cout << "Reverse : " << rev;
    return 0;
}
