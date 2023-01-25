#include<iostream>
using namespace std;

int main()
{
   int num, sum=0;
       cin >> num;

   int i = 1;
	 while(i <= num)
	  {
	    if(i%2==0)
	      {
		 sum += i;
	      }
	i++;
	 }
   cout << sum << endl; 
}
