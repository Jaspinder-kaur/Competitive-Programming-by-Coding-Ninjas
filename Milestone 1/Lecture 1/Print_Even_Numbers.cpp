#include <iostream>
using namespace std;

int main()
{
    int num, next = 2;
    cout << "Enter Number :" << endl;
    cin >> num;  
    cout << "All even between 1 To N : " << endl;
    while(next <= num)
    {
      if(next % 2 == 0)
        {
            cout << next << endl;
            next = next + 2;
        }
    }
    return 0;
}
