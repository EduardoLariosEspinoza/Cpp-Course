#include <iostream>

using namespace std;

struct Estructura_Discapacidad
{
  char nombre[30];
  bool discapacidad;
} personas[100], personasConD[100], personasSinD[100];

int main()
{
  int numero_personas, j = 0, k = 0, copia;

  cout << "Cuantas personas hay?: ";
  cin >> numero_personas;

  for (int i = 0; i < numero_personas; i++)
  {
    fflush(stdin);
    cout << "Escriba el nombre de la persona numero " << i << endl;
    cin.getline(personas[i].nombre, 30, '\n');
    cout << "Esta persona tiene alguna discapacidad? (0/1): ";
    cin >> personas[i].discapacidad;

    if (personas[i].discapacidad == 0)
    {
      strcpy(personasSinD[k].nombre, personas[i].nombre);
      k++;
    }
    else if (personas[i].discapacidad == 1)
    {
      strcpy(personasConD[j].nombre, personas[i].nombre);
      j++;
    }
    else
    {
      cout << "Debes colocar un 0 o un 1";
    }
  }

  cout << "\nLista de personas sin discapacidad\n";
  for (int i = 0; i < k; i++)
  {
    cout << personasSinD[i].nombre << endl;
  }

  cout << "\nLista de personas con discapacidad\n";
  for (int i = 0; i < k; i++)
  {
    cout << personasConD[i].nombre << endl;
  }

  return 0;
}