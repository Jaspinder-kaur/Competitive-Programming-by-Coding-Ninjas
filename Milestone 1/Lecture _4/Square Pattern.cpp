/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
4444
4444
4444

Input format :
Total number of rows.
*/
#include<iostream>
using namespace std;

int main(){

      int num, row=1;
	  cin >> num;
	  while(row <= num)
	  {
		  int col = 1;
		  while(col <= num)
		  {
			  cout << num;
        col = col + 1;
      }
				  cout << endl;
				  row = row + 1;
	  }
		  return 0;
}
