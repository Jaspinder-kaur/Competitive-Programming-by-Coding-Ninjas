#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Number : ";
    cin >> num;
    int next_num;
    for(next_num=1; next_num <= num; next_num++)
    {
        cout << next_num << endl;
    }
    return 0;
}
