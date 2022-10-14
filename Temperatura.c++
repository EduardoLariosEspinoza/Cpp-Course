#include <iostream>
using namespace std;

int main()
{
  float i = 1, x, s = 0, a = -10000000000000, b = 100000000000000;

  while (i <= 6)
  {
    cout << "Ingresa la temperatura regsitrada: ";
    cin >> x;
    s += x;

    if (x > a)
    {
      a = x;
    }
    if (x < b)
    {
      b = x;
    }
    i++;
  }
  s /= 6;
  cout << "La temperatura promedio fue de " << s << " grados" << endl;
  cout << "La temperatura mas alta fue de " << a << " grados" << endl;
  cout << "La temperatura mas baja fue de " << b << " grados" << endl;

  return 0;
}