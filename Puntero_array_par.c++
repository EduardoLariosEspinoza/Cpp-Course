#include <iostream>

using namespace std;

int main()
{

  int numeros[10];
  int *dir_numeros;

  for (int i = 0; i < 10; i++)
  {
    cout << "Ingresa el numero en la posicion " << i << ": ";
    cin >> numeros[i];
  }

  dir_numeros = numeros; // Posicion de memoria en la que comienzan los numeros

  for (int i = 0; i < 10; i++)
  {
    if (*dir_numeros % 2 == 0)
    {
      cout << "\nEl numero " << *dir_numeros << " es par y esta en la posicion " << i << endl;
    }
    else
    {
      cout << "\nEl numero " << *dir_numeros << " es impar y esta en la posicion: " << i << endl;
    }
    cout << "Su direccion de memoria es: " << dir_numeros << endl;

    dir_numeros++;
  }

  return 0;
}