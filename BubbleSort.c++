#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  int numeros[] = {1, 5, 5, 7, 4, 3, 9, 8};
  int aux;

  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      if (numeros[j] > numeros[j + 1])
      {
        aux = numeros[j];
        numeros[j] = numeros[j + 1];
        numeros[j + 1] = aux;
      }
    }
  }
  cout << "Orden ascendente: ";

  for (int i = 1; i < 9; i++)
  {
    cout << numeros[i];
  }

  return 0;
}