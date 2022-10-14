#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  int numeros[] = {5, 1, 5, 7, 4, 3, 9, 8};
  int aux, pos;

  for (int i = 0; i < 9; i++)
  {
    pos = i;
    aux = numeros[i];

    while ((pos > 0) && (numeros[pos - 1] > aux))
    {
      numeros[pos] = numeros[pos - 1];
      pos--;
    }
    numeros[pos] = aux; //aux tiene guardado el valor anterior de numeros[pos]
  }
  cout << "Orden ascendente: ";

  for (int i = 1; i < 9; i++)
  {
    cout << numeros[i];
  }

  return 0;
}