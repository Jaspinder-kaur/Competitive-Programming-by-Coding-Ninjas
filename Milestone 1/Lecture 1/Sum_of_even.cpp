
#include <iostream>
using namespace std;
int main()
{
    int number,sum=0,i;
    cout << "Enter Number : ";
    cin >> number;
    for(i=1; i<= number; i++)
    {
       if(i%2==0) 
       {
           sum = sum + i;
       }
    }
    cout<<"Sum of Even : " << sum;
    return 0;
}
