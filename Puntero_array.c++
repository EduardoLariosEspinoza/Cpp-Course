#include <iostream>

using namespace std;

int main()
{
  int numeros[] = {1, 2, 3, 4, 5};
  int *dir_numeros;

  // La variable "numeros" por si sola guarda la direccion de memoria de donde empieza el array, esto con cualquier vector
  // cout << numeros;
  dir_numeros = numeros;

  for (int i = 0; i < 5; i++)
  {
    cout << "El valor de la posicion " << i << " es: " << *dir_numeros << endl;

    // Aumentamos en cuatro bytes la direccion de memoria para que pase al siguiente valor en el array
    dir_numeros++;
  }

  return 0;
}