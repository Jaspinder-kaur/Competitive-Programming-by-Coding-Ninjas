/*
Print the follwoing pattern:
    4321
    4321
    4321
    4321
*/
#include <iostream>
using namespace std;

int main()
{
    int num, i = 1;
    cin >> num;
    
  while(i <= num)
  {
      int j = 1;
      while(j <= num)
      {
          cout << num - j + 1;
          j = j + 1;
      }
      cout <<  endl;
      i = i + 1;
  }
    return 0;
}
