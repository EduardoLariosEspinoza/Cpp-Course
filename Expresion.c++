#include <iostream>
using namespace std;

int main()
{
  float a, b, c, d, r = 0;
  cout << "Ingresa el valor de a: ";
  cin >> a;
  cout << "Ingresa el valor de b: ";
  cin >> b;
  cout << "Ingresa el valor de c: ";
  cin >> c;
  cout << "Ingresa el valor de d: ";
  cin >> d;
  r = (a + b) / (c + d);
  cout.precision(3);
  cout << "El resultado de la expresion, (a + b) / (c + d), es: " << r << endl;
  return 0;
}