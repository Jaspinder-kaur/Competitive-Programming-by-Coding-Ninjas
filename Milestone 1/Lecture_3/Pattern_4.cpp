/*
Print the following pattern
Pattern for N = 4
1
23
345
4567
*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    
    int i = 1;
   
    while(i<=number)
    {
        int j=1;
        int val = i;
        while(j<=i)
        {
             cout << val; 
            j = j + 1;
            val = val + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
