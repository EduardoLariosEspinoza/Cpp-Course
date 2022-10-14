#include <iostream>
using namespace std;

int main()
{
  int c = 0, filas, columnas;
  int numeros[filas][columnas];
  int numeros2[filas][columnas];

  cout << "Ingresa el numero de filas que tendran las matrices: ";
  cin >> filas;
  cout << "Ingresa el numero de columnas que tendran las matrices: ";
  cin >> columnas;

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
      cout << "Ingresa un numero en la posicion [" << i << "],[" << j << "]: ";
      cin >> numeros2[i][j];
    }
  }

  cout << "\n";

  if (filas == columnas)
  {
    cout << "La matriz es simetrica";
  }
  else
  {
    cout << "La matriz no es simetrica";
  }

  return 0;
}