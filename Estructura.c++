#include <iostream>
using namespace std;

struct Persona
{
  char Nombre[20];
  int Edad;
} Persona1[2];

int main()
{
  cout << "Ingresa el nombre: ";
  cin.getline(Persona1[1].Nombre, 20, '\n');
  cout << "Ingresa la edad: ";
  cin >> Persona1[1].Edad;

  cout << Persona1[1].Nombre << '\n';
  cout << Persona1[1].Edad;

  return 0;
}