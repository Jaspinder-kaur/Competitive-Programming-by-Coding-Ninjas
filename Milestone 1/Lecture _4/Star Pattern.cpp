/*
Print the following pattern for the given N number of rows.
    *
    **
    ***
    ****
*/
#include<iostream>
using namespace std;

int main()
{
      int num;
	   cin >> num;
	   int row = 1;
	   while(row <= num)
	   {
		   int col = 1;
         while(col <= row)
         {
           cout << "*";
           col = col + 1;
         }
		   cout << endl;
		   row = row + 1;
	   } 
}
