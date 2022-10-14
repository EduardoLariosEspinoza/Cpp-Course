#include <iostream>
using namespace std;

int main()
{
  int numeros[3][3];
  int numeros2[3][3];
  int final[3][3];

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "Ingresa un numero en la posicion [" << i << "],[" << j << "]: ";
      cin >> numeros[i][j];
    }
  }

  cout << "\n";

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "Ingresa un numero en la posicion [" << i << "],[" << j << "]: ";
      cin >> numeros2[i][j];
    }
  }

  cout << "\n";
  cout << "La suma de las dos matrices es: ";
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      final[i][j] = numeros[i][j] + numeros2[i][j];
      cout << final[i][j] << " | ";
    }
    cout << "\n";
  }

  return 0;
}