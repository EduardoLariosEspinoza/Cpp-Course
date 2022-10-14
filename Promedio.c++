#include <iostream>
using namespace std;

int main()
{
  float a, b, c, d, p;
  cout << "Ingresa la calificacion de el alumno 1: ";
  cin >> a;
  cout << "Ingresa la calificacion de el alumno 2: ";
  cin >> b;
  cout << "Ingresa la calificacion de el alumno 3: ";
  cin >> c;
  cout << "Ingresa la calificacion de el alumno 4: ";
  cin >> d;
  p = (a + b + c + d) / 4;
  cout << "La calificacion promedio entre estos 4 alumnos es de " << p;
  return 0;
}