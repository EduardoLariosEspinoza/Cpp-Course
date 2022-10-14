#include <iostream>
using namespace std;

int main()
{
  char a;
  cout << "Ingresa una letra: ";
  cin >> a;
  switch (a)
  {
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
    cout << "Es una vocal minuscula";
    break;

  default:
    cout << "No es una vocal minuscula";
    break;
  }

  return 0;
}