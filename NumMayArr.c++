#include <iostream>
using namespace std;

// Autor: Eduardo Larios Espinoza.

int main()
{
  int numelementos, num, almacen = 0;
  cout << "Ingresa el numero de elmentos que tendra el array: ";
  cin >> numelementos;
  int numeros[numelementos];
  for (int i = 0; i < numelementos; i++)
  {
    num = 0;
    cout << "Ingresa un numero al array: ";
    cin >> num;
    numeros[i] = num;
  }
  for (int i = numelementos - 1; i > (-1); i--)
  {
    if (numeros[i] > almacen)
    {
      almacen = numeros[i];
    }
  }
  cout << "\nEl numero mayor del array es el " << almacen;
  //cout << sizeof numeros / sizeof numeros[0];
  return 0;
}