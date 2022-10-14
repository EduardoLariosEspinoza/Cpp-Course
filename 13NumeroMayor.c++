#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int a, b;
  cout << "Ingresa dos numeros: ";
  cin >> a >> b;
  if (a > b)
  {
    cout << "El numero " << a << " es mayor que " << b;
  }
  else if (a == b)
  {
    cout << "Ambos numeros son iguales";
  }
  else
  {
    cout << "El numero " << b << " es mayor que " << a;
  }

  return 0;
}