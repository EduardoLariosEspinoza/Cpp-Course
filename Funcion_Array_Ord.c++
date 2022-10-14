#include <iostream>

using namespace std;

void pedirDatos();
void verOrden(int[], int);

int arr[100], tam;

int main()
{
  pedirDatos();
  verOrden(arr, tam);

  return 0;
}

void pedirDatos()
{
  cout << "Ingresa el tamaño del array: ";
  cin >> tam;

  for (int i = 0; i < tam; i++)
  {
    cout << "Ingresa un valor: ";
    cin >> arr[i];
  }
}

void verOrden(int arr[], int tam)
{
  int orden = 0;

  for (int i = 1; i < tam; i++)
  {
    if (arr[i] != 0)
    {
      if (arr[i] > arr[i - 1])
      {
        orden += 1;
      }
    }
  }

  if (orden == tam - 1)
  {
    cout << "El array esta ordenado crecientemente";
  }
  else
  {
    cout << "El array no esta ordenado crecientemente";
  }
}