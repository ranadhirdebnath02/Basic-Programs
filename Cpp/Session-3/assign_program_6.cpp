/*
Write a function, which will take three numbers as parameter and returns the
highest number of them [using nested if].
*/

#include <iostream>
using namespace std;

int max(int n1, int n2, int n3)
{
  if (n1 > n2 && n1 > n3)
  {
    return n1;
  }
  else
  {
    if (n2 > n3)
    {
      return n2;
    }
    else
    {
      return n3;
    }
  }
}

int main()
{
  int a, b, c;
  cout << "Enter 3 numbers: ";
  cin >> a >> b >> c;
  cout << "The largest number is " << max(a, b, c);
  return 0;
}