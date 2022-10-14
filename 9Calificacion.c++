#include <iostream>
using namespace std;

int main()
{
  float x, y, z, f = 0;
  cout << "Ingresa la calificacion en la nota de practicas: ";
  cin >> x;
  cout << "Ingresa la calificacion del exament teorico: ";
  cin >> y;
  cout << "Ingresa la calificacion de la nota en participacion: ";
  cin >> z;
  x *= 30;
  y *= 60;
  z *= 10;
  f = (x + y + z) / 100;
  cout.precision(3);
  cout << "\nLa calificacion final es de: " << f;

  return 0;
}