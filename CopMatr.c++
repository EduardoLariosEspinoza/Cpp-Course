#include <iostream>
using namespace std;

int main()
{
  int numeros[2][2];
  int numeros2[2][2];

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << "Ingresa un numero en la posicion [" << i << "],[" << j << "]: ";
      cin >> numeros[i][j];
    }
  }

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      numeros2[i][j] = numeros[i][j];
    }
    cout << "\n";
  }

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << numeros2[i][j];
    }
    cout << "\n";
  }

  return 0;
}