#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a;
  cout << "Ingresa un numero: ";
  cin >> a;
  string resultado = (a <= 10) ? "El numero es menor o igual a 10" : "El numero es mayor a 10";
  cout << resultado;

  return 0;
}