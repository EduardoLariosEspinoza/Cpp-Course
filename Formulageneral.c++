#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  float a, b, c, r1 = 0, r2 = 0;
  cout << "Ingresa el valor de a: ";
  cin >> a;
  cout << "Ingresa el valor de b: ";
  cin >> b;
  cout << "Ingresa el valor de c: ";
  cin >> c;
  r1 = ((-b) + sqrt((pow(b, 2) - (4 * a * c)))) / (2 * a);
  r2 = ((-b) - sqrt((pow(b, 2) - (4 * a * c)))) / (2 * a);
  cout << "\nLas dos soluciones de la ecuacion son: " << r1 << " y " << r2;

  return 0;
}