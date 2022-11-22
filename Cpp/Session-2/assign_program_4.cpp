/*
Write a function called ‘swap’, which will take two numbers as parameter
(passed-by-address) and will interchange their value and display the changed
value in the main()
*/

#include <iostream>
using namespace std;

void swap(int *n1, int *n2)
{
  *n1 = *n1 + *n2;
  *n2 = *n1 - *n2;
  *n1 = *n1 - *n2;
}

int main()
{
  int a, b;
  cout << "Enter 2 numbers: ";
  cin >> a >> b;
  cout << "Before swap: a = " << a << ", b = " << b << endl;
  swap(&a, &b);
  cout << "After swap: a = " << a << ", b = " << b << endl;
  return 0;
}