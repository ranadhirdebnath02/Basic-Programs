/*
Modify the above program (assign_program_4.cpp) in such a way so that it will be able to display the
changed value in the swap() & as well as main() function (using reference)
*/

#include <iostream>
using namespace std;

void swap(int &n1, int &n2)
{
  n1 = n1 + n2;
  n2 = n1 - n2;
  n1 = n1 - n2;
}

int main()
{
  int a, b;
  cout << "Enter 2 numbers: ";
  cin >> a >> b;
  cout << "Before swap: a = " << a << ", b = " << b << endl;
  swap(a, b);
  cout << "After swap: a = " << a << ", b = " << b << endl;
  return 0;
}