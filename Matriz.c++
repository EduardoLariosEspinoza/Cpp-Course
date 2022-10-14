#include <iostream>
using namespace std;

int main()
{
  int filas, columnas, num, almacen = 0;
  cout << "Ingresa el numero de filas que tendra el array: ";
  cin >> filas;
  cout << "Ingresa el numero de columnas que tendra el array: ";
  cin >> columnas;
  int numeros[filas][columnas];

  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      cout << "Ingresa un numero en la posicion [" << i << "],[" << j << "]: ";
      cin >> numeros[i][j];
    }
  }

  cout << "\n";

  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      cout << numeros[i][j];
    }
    cout << "\n";
  }

  return 0;
}