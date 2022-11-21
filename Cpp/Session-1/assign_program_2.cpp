/*  Modify the previous program (assign_program_1.cpp) 
in such a way so that it will take a number as
parameter and prompt whether it is odd or even. */

#include <iostream>
using namespace std;

void check_odd_or_even(int n)
{
  if (n % 2 == 0)
  {
    cout << n << " is even number";
  }
  else
  {
    cout << n << " is odd number";
  }
}

int main()
{
  int num;
  cout << "Enter any integer: ";
  cin >> num;
  check_odd_or_even(num);
  return 0;
}