#include <iostream>
#include <cstdio>

using namespace std;
int a, b;
char op;

int
main ()
{
  cout << "\nPlease Enter 1st Number : ";
  cin >> a;

  cout << "\nPlease Enter 2nd Number : ";
  cin >> b;

A:
  cout << "\nPlease Enter Operation (+,-,*,/)";
  cin >> op;

  switch (op)
    {
    case ('+'):
    cout << "\nYour Sum Is " << a + b;
    break;
    case ('-'):
    cout << "\nYour Difference Is " << a - b;
    break;
    case ('*'):
    cout << "\nYour Product Is " << a * b;
    break;
    case ('/'):
    cout << "\nYour Quotient Is " << a / b;
    break;
    default:
    cout<<"Please Enter A Walid Operation";
    goto A;
    break;
    }
}