#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int a, b, c;
  cout << "Ingresa tres numeros: ";
  cin >> a >> b >> c;
  if (a > b)
  {
    if (a > c)
    {
      cout << "El numero mayor es el " << a;
    }
  }
  else if (a == b)
  {
    if (a > c)
    {
      cout << "El numero mas alto es el " << a;
    }
    else if (a == c)
    {
      cout << "Todos los numeros son iguales y son " << a;
    }
    else
    {
      cout << "El numero mas alto es el " << c;
    }
  }
  else if (b > c)
  {
    cout << "El numero mas grande es " << b;
  }
  else
  {
    cout << "El numero mas grande es el " << c;
  }

  return 0;
}