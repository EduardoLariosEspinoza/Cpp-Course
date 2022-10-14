#include <iostream>
using namespace std;

int main()
{
  int x;
  cout << "Ingresa un numero entre 1 y 5: ";
  cin >> x;
  switch (x)
  {
  case 1:
    cout << "El numero es 1";
    break;
  case 2:
    cout << "El numero es 2";
    break;
  case 3:
    cout << "El numero es 3";
    break;
  case 4:
    cout << "El numero es 4";
    break;
  case 5:
    cout << "El numero es 5";
    break;

  default:
    cout << "El numero no esta dentro del rango establecido";
    break;
  }

  return 0;
}