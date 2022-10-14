#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int x, n;
  float f, p;
  cout << "Ingresa un numero: ";
  cin >> n;
  cout << "1-Conocer el cubo del numero" << endl;
  cout << "2-Saber si el numero es par o impar" << endl;
  cout << "3-Salir " << endl;
  cin >> x;
  switch (x)
  {
  case 1:
    f = pow(n, 3);
    cout << "El cubo de " << n << " es: " << f;
    break;
  case 2:
    if (n == 0)
    {
      cout << "El numero es igual a 0";
    }
    else if (n % 2 == 0)
    {
      cout << "El numero " << n << " es par";
    }
    else
    {
      cout << "El numero " << n << " es impar";
    }
    break;

  case 3:
    cout << "Saliendo...";
    break;

  default:
    cout << "Debes ingresar un numero entre 1-3 para realizar una de las acciones";
    break;
  }

  return 0;
}