#include <iostream>

using namespace std;

void pedirDatos();
void imprimirImpares(int[]);

int arr[100];
int tam;

int main()
{
  pedirDatos();
  imprimirImpares(arr);

  return 0;
}

void pedirDatos()
{
  cout << "Cual es el tamaño del array?: ";
  cin >> tam;

  for (int i = 0; i < tam; i++)
  {
    cout << "Ingresa un valor: ";
    cin >> arr[i];
  }
}

void imprimirImpares(int arr[])
{
  cout << "Los valores impares son: ";
  for (int i = 0; i < tam; i++)
  {
    if (arr[i] % 2 != 0)
    {
      cout << arr[i] << " ";
    }
  }
}