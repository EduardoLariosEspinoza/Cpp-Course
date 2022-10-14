#include <iostream>
using namespace std;

int main()
{
  float a, b, suma = 0, resta = 0, restados = 0, multiplicacion = 0, division = 0, divisiondos = 0;
  cout << "Ingresa un numero";
  cin >> a;
  cout << "Ingresa otro numero";
  cin >> b;
  suma = a + b;
  resta = a - b;
  restados = b - a;
  division = a / b;
  divisiondos = b / a;
  multiplicacion = a * b;
  cout << "La suma de " << a << " mas " << b << " es igual a: " << suma << endl;
  cout << "La resta de " << a << " menos " << b << " es igual a: " << resta << endl;
  cout << "La resta de " << b << " menos " << a << " es igual a: " << restados << endl;
  cout << "La multiplicacion de " << a << " por " << b << " es igual a: " << multiplicacion << endl;
  cout << "La division de " << a << " entre " << b << " es igual a: " << division << endl;
  cout << "La division de " << b << " entre " << a << " es igual a: " << divisiondos << endl;

  return 0;
}