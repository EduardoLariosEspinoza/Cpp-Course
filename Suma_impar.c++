#include <iostream>
using namespace std;

int main()
{
  int n, m = 0;
  cout << "Ingresa hasta que numero quieres que se sume en numeros impares: ";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    m += 2 * i - 1;
  }
  cout << "La suma de los numeros hasta el que se escribio es: " << m;

  return 0;
}