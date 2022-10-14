#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int x;
  cout << "Ingresa un numero: ";
  cin >> x;
  if (x == 0)
  {
    cout << "El numero es 0";
  }
  else if (x % 2 == 0)
  {
    cout << "El numero que ingresaste es par";
  }
  else
  {
    cout << "El numero que ingresaste es impar";
  }

  return 0;
}