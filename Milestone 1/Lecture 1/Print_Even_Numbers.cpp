#include <iostream>
using namespace std;
int main()
{
    int num, next_num;
    cout << "Enter Number : ";
    cin >> num;
    cout << "All even between 1 To N : " << endl;
    for(next_num =1; next_num <= num; next_num++)
    {
        if(next_num%2==0)
        {
            cout << next_num << endl;
        }
    }
    return 0;
}
