#include <iostream>

struct Corredor
{
  char Nombre[20];
  int Edad;
} Persona1;

using namespace std;

int main()
{
  char categoria[20];

  cout << "Ingresa el nombre del corredor: ";
  cin.getline(Persona1.Nombre, 20, '\n');

  cout << "Ingresa la edad del corredor: ";
  cin >> Persona1.Edad;

  if (Persona1.Edad <= 18)
  {
    strcpy(categoria, "Juvenil");
  }
  else if (Persona1.Edad <= 40)
  {
    strcpy(categoria, "Señor");
  }
  else
  {
    strcpy(categoria, "Veterano");
  }

  cout << categoria;

  return 0;
}