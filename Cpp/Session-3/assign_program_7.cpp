/*
Write a function ‘line’ which will draw a line of a desired length with a desired
character. The function will take two parameters, a character by which the
line is to be drawn and the length of the line. If the user does not provide any
parameter at the time of calling it will take ‘*’ and 80 as default to draw the
line.
*/

#include <iostream>
using namespace std;

void line(char ch = '*', int len = 80)
{
  for (int i = 1; i <= len; i++)
  {
    cout << ch;
  }
}

int main()
{
  char c;
  int l;
  cout << "Enter character to print: ";
  cin >> c;
  cout << "How many times to print?: ";
  cin >> l;
  line(c, l);
  cout << endl;
  line();
  return 0;
}