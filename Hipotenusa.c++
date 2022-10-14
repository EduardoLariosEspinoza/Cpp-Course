#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  float a, b, c;
  cout << "Ingresa el valor del primer cateto: ";
  cin >> a;
  cout << "Ingresa el valor del segundo cateto: ";
  cin >> b;
  c = sqrt((a * a) + (b * b));
  cout << "/nEl valor de la hipotenusa es de: " << c;

  return 0;
}