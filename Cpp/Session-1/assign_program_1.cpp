/*
Write a function, which will prompt user to enter a number, 
after that it will show whether it is odd or even.
*/

#include <iostream>
using namespace std;

void check_odd_or_even()
{
  int num;
  cout << "Enter any integer: ";
  cin >> num;
  if (num % 2 == 0)
  {
    cout << num << " is even number";
  }
  else
  {
    cout << num << " is odd number";
  }
}

int main()
{
  check_odd_or_even();
  return 0;
}