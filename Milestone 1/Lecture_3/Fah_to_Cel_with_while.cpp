/*
Given three values - Start Fahrenheit Value (S), End Fahrenheit value 
(E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, 
into their corresponding Celsius values and print the table.
Input Format : 3 integers - S, E and W respectively
Output Format :
Fahrenheit to Celsius conversion table. One line for every Fahrenheit and corresponding Celsius value in integer form. 
The Fahrenheit value and its corresponding Celsius value should be separate by single space.
Constraints :
0 <= S <= 90
S <= E <=  900
0 <= W <= 80 
Sample Input 1:
0 
100 
20
Sample Output 1:
0   -17
20  -6
40  4
60  15
80  26
100 37
*/
#include<iostream>
using namespace std;


int main(){
int S,E,W,fah;
cin >> S >> E >> W;
while(S<=E)
{
fah = ((5*(S-32))/9);
cout << S << " " << fah << endl;
S +=W;
}
}
