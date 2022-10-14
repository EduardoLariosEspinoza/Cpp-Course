#include <iostream>

using namespace std;

int main()
{

  int numeros[10];
  int *dir_numeros;
  int tamaño, numero_menor;

  cout << "Cuantos numeros tendra el arreglo: ";
  cin >> tamaño;

  for (int i = 0; i < tamaño; i++)
  {
    cout << "Ingresa un numero: ";
    cin >> numeros[i];
  }

  dir_numeros = numeros; // Posicion de memoria en la que comienzan los numeros

  numero_menor = *dir_numeros;

  for (int i = 0; i < tamaño; i++)
  {
    if (*dir_numeros < numero_menor)
    {
      numero_menor = *dir_numeros;
    }

    dir_numeros++;
  }

  cout << "El numero mas pequeño del array es: " << numero_menor;

  return 0;
}