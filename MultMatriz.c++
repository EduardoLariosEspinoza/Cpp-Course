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

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      final[i][j] = 0;
      for (int k = 0; k < 3; k++)
      {
        final[i][j] += numeros[i][k] * numeros2[k][j];
      }
    }
    cout << "\n";
  }
  cout << "\n";
  cout << "La tercer matriz es:" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << " | " << final[i][j];
    }
    cout << "\n";
  }

  return 0;
}