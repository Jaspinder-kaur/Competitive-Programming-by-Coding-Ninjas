#include <iostream>
using namespace std; 
int main()
{
    int num, div = 2;
    bool flag = false;
    cout << "Enter Number" << endl;
    cin >> num;
        while(div < num)
        {
            if(num%2==0)
            {
                cout << "Not prime" << endl;
                flag = true;
                break;
            }
            div = div + 1;
        }
        if(!flag)
        {
            cout << "Prime" << endl;
        }
}
