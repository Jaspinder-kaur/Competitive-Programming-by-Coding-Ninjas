#include <iostream>
using namespace std;
int main()
{
    int number,sum=0,i=2;
    cout << "Enter Number : ";
    cin >> number;
   while(i<= number)
    {
       if(i%2==0) 
       {
           sum = sum + i;
           i = i + 2;
       }
    }
    cout<<"Sum of Even : " << sum;
    return 0;
}
