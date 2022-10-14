#include <iostream>
using namespace std;

struct DirPersonas
{
  char Calle[20];
  int Numero;
};

struct Persona
{
  char Nombre[20];
  int Edad;
  struct DirPersonas DireccionPersona;
} Persona1[2];

int main()
{
  for (int i = 1; i < 3; i++)
  {
    fflush(stdin);
    cout << "Ingresa el nombre: ";
    cin.getline(Persona1[i].Nombre, 20, '\n');
    cout << "Ingresa tu calle: ";
    cin.getline(Persona1[i].DireccionPersona.Calle, 20, '\n');
    cout << "Ingresa el numero de tu direccion: ";
    cin >> Persona1[i].DireccionPersona.Numero;

    cout << Persona1[i].Nombre << endl;
    cout << Persona1[i].DireccionPersona.Calle << endl;
    cout << Persona1[i].DireccionPersona.Numero << endl;

    cout << "\n";
  }

  return 0;
}