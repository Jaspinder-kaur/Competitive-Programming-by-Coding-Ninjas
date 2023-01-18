/*
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), 
and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
Round off the total salary and then print the integral part only.
Input format :
Basic salary & Grade (separated by space)
Output Format :
Total Salary
Constraints :
0 <= Basic Salary <= 7,500,000
*/
#include<iostream>
#include <math.h>
using namespace std;

int main() {
  int basic_salary;
  double da, allowance, hra, pf;
  double total_salary;
 char grade;
  cin >> basic_salary >> grade;
  if (basic_salary >= 0 || basic_salary <= 7500000)
  {
    da = 0.2 * basic_salary;
    hra = 0.5 * basic_salary;
    pf = 0.11 * basic_salary;

      if (grade == 'A') 
      {
        allowance = 1700;
      } 
      else if (grade == 'B') 
      {
        allowance = 1500;
      } 
      else 
      {
        allowance = 1300;
      }
  }   
total_salary = basic_salary + da + hra + allowance - pf;
cout << round(total_salary);
}
