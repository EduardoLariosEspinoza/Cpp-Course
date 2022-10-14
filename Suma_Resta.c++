#include <iostream>
using namespace std;

int main()
{
  int x, s = 0;
  cout << "Ingresa hasta que numero quieres que se haga la operacion de 1-2+3-4+5...n: ";
  cin >> x;
  for (int i = 1; i <= x; i++)
  {
    if (i % 2 == 0)
    {
      s -= i;
    }
    else
    {
      s += i;
    }
  }
  cout << "El reultado de 1-2+3-4+5...n es: " << s;

  return 0;
}