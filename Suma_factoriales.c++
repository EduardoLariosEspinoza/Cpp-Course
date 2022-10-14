#include <iostream>
using namespace std;

int main()
{
  int n, m = 1, a = 0;
  cout << "Ingresa hasta que numero quieres que se sumen los factoriales: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    m *= i;
    a += m;
  }

  cout << "La suma de los factoriales es: " << a;

  return 0;
}