#include <iostream>
using namespace std;

int main()
{
    int num, next = 2,flag = 0;
    cout << "Enter Number :" << endl;
    cin >> num;

    while(next < num)
    {
      if(num % next == 0)
        {
            flag = 1;
            break;
        }
         next++;
    }
    
    if(flag==0)
    {
        cout <<"Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }
    return 0;
}
