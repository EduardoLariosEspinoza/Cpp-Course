#include <iostream>
using namespace std;

int main()
{
  float a, b, r = 0;
  cout << "Ingresa el valor de a: ";
  cin >> a;
  cout << "Ingresa el valor de b: ";
  cin >> b;
  r = (a / b) + 1;
  cout.precision(3);
  cout << "El resultado de la expresion, ((a/b)+1), es: " << r << endl;
  return 0;
}