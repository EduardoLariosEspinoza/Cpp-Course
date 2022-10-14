#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  int filas, columnas, num;
  int numeros[filas][columnas];
  int numeros2[filas][columnas];

  cout << "Ingresa el numero de filas: ";
  cin >> filas;

  cout << "Ingresa el numero de columnas: ";
  cin >> columnas;

  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      numeros[i][j] = 1 + rand() % (100);
      numeros2[i][j] = numeros[i][j];
      cout << numeros2[i][j] << " | ";
    }
    cout << "\n";
  }

  return 0;
}