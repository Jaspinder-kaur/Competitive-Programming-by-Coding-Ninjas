#include <iostream>
using namespace std;   
int main()
{
    double a = 6 / 4;
    int b  = 6 / 4;
    double c = a + b;
    cout << c;
  /*When 6 / 4 is performed, both the operands of / are int hence answer will be an int i.e. 
  1. Hence the value of both a and b is 1. 
  Thus a + b will be 2. In C++, if a double value doesn't contain any decimal value, only integer will be printed.*/
}
