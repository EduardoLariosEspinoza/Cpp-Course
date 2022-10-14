#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  float x, y, f = 0;
  cout << "Ingrese el valor de x: ";
  cin >> x;
  cout << "Ingresa el valor de y: ";
  cin >> y;
  f = (sqrt(x)) / (pow(y, 2) - 1);
  cout << "\nEl valor de la funcion es de: " << f;

  return 0;
}