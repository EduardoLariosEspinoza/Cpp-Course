#include <iostream>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void mostrarDatos();

int num_calificaciones, *calificaciones;

int main()
{
  pedirDatos();
  mostrarDatos();

  delete[] calificaciones;

  cout << calificaciones;

  return 0;
}

void pedirDatos()
{
  cout << "Ingresa el numero de calificaciones: ";
  cin >> num_calificaciones;

  calificaciones = new int[num_calificaciones];

  for (int i = 0; i < num_calificaciones; i++)
  {
    cout << "Ingresa una calificacion: ";
    cin >> calificaciones[i];
  }
}

void mostrarDatos()
{
  for (int i = 0; i < num_calificaciones; i++)
  {
    cout << "Calificacion " << i + 1 << ": " << calificaciones[i] << endl;
  }
}