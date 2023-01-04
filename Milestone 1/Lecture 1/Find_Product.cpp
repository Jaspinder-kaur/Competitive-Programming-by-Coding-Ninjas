#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Number : ";
    cin >> num;
    int next_num, product = 1;
    for(next_num=1; next_num <= num; next_num++)
    {
        product = product * next_num;
    }
    cout << product << endl;
    return 0;
}
