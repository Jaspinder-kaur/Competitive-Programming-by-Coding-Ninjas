/*
Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.
Input format :
 Integer N
Output format :
Sum_of_Even_Digits Sum_of_Odd_Digits
(Print first even sum and then odd sum separated by space)
*/
#include <iostream>
using namespace std;

int main() {
    int num, digit;
    cin >> num;
    int sum_even = 0, sum_odd = 0;
    while(num!=0)
    {
        digit = num % 10;
        num = num / 10;
        if(digit%2==0)
        {
            sum_even = sum_even + digit;
        }
        else
        {
            sum_odd = sum_odd + digit;
        }
    }
    cout << sum_even << " " << sum_odd;
    return 0;
}
