
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout  <<"Rows : " << endl;
    cin >> number;
    
    int i = 1;
    int val = 1;
    while(i<=number)
    {
        int j=1;
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
