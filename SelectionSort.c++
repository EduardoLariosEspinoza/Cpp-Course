#include <iostream>

using namespace std;

int main()
{
  int numeros[] = {5, 1, 5, 7, 4, 3, 9, 8};
  int aux, min;

  for (int i = 0; i < 9; i++)
  {
    min = i;
    for (int j = i + 1; j < 9; j++)
    {

      if (numeros[j] < numeros[min])
      {
        min = j;
      }
    }

    aux = numeros[i];
    numeros[i] = numeros[min];
    numeros[min] = aux;
  }

  cout << "Orden ascendente: ";

  for (int i = 1; i < 9; i++)
  {
    cout << numeros[i];
  }

  return 0;
}