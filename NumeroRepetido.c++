#include <iostream>
using namespace std;

int main()
{
  float a, b, c, d;
  cout << "Ingresa tres numeros: ";
  cin >> a >> b >> c;
  cout << "Ingresa un numero para saber si se repite: ";
  cin >> d;
  if (d == a || d == b || d == c)
  {

    cout << "El cuarto numero es igual a alguno(s) ya escrito(s)";
  }
  else
  {
    cout << "El numero no es igual a ninguno escrito anteriormente";
  }

  return 0;
}