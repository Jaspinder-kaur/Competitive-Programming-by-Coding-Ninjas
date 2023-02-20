/*
Checking whether a number is palindrome or not
Input: 1551
Output: Palindrome: 1551
*/
#include <iostream>
using namespace std;

int main()
{
    int num, rev = 0, temp;
    cout<<"Enter Number : ";
    cin >> num;

    temp = num;
    
    while(num!=0)
    {
        int last = num % 10;
        num = num / 10;
        rev = rev * 10 + last; 
    }
    
    if(rev == temp )
    {
        cout << "Palindrome: " << rev << endl;
    }
    else
    {
        cout << "Not Palindrome: " << rev << endl;
    }
    return 0;
}
