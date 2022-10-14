#include <iostream>
using namespace std;

int main()
{
  float a, b, c;
  cout << "Ingresa el costo bruto del producto";
  cin >> a;
  b = (a / 100) * 16;
  c = a + b;
  cout << "El precio final (Ya con iva) del producto es de: " << c;
  return 0;
}