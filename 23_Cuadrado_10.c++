#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int i = 1, x, s = 0;

  while (i <= 10)
  {
    x = pow(i, 2);
    cout << "El cuadrado de " << i << " es: " << x << endl;
    s += x;
    i++;
  }
  cout << "La suma de los cuadrados es: " << s;

  return 0;
}