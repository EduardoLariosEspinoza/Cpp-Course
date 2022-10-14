#include <iostream>
using namespace std;

int main()
{
  int x, y, z;
  cout << "Ingresa el numero base: ";
  cin >> x;
  cout << "Ingresa el exponente: ";
  cin >> y;
  z = x;
  do
  {
    x *= z;
    y--;
  } while (y > 1);
  cout << "El resultado es: " << x;

  return 0;
}