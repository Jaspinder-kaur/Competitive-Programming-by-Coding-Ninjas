/*
Print the following pattern
    1111
    2222
    3333
    4444
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
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}
