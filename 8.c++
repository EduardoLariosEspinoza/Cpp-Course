#include <iostream>
using namespace std;

int main()
{
  float x, y, a;
  cout << "Ingresa el valor de x: ";
  cin >> x;
  cout << "Ingresa el valor de y: ";
  cin >> y;
  a = x;
  x = y;
  y = a;
  cout << "El valor de x ahora es de: " << x << endl;
  cout << "El valor de y ahora es de: " << y << endl;
  return 0;
}