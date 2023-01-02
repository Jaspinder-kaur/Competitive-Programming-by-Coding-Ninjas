#include <iostream>
using namespace std;

int main()
{
   int num1, num2, num3;
   cout << "Enter Three Numbers : " <<endl;
   cin >> num1 >> num2 >> num3;
   int average;
   average = (num1 + num2 + num3) / 3;
   cout << "Average of Three numbers are : " << average;
    return 0;
}
