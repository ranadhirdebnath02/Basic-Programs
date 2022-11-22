/*
Write a function ‘prime’ which will take a number as parameter and return
TRUE if it is prime and FALSE if it is not prime.
*/

#include <iostream>
using namespace std;

bool prime(int num)
{
  bool isPrime = true;
  for (int i = 2; i < num / 2; i++)
  {
    if (num % i == 0)
    {
      isPrime = false;
      break;
    }
  }
  return isPrime;
}

int main()
{
  int n;
  cout << "Enter any number: ";
  cin >> n;
  if (prime(n))
  {
    cout << n << " is a prime number";
  }
  else
  {
    cout << n << " is not a prime number";
  }
  return 0;
}