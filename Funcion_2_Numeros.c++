#include <iostream>

using namespace std;

int encontrarMaximo(int numero1_funcion, int numero2_funcion);

int main()
{
  int numero1, numero2;

  cout << "Escribe dos numeros: ";
  cin >> numero1 >> numero2;

  cout << "El numero mayor es: " << encontrarMaximo(numero1, numero2);

  return 0;
}

int encontrarMaximo(int numero1_funcion, int numero2_funcion)
{
  int numero_maximo;

  if (numero1_funcion > numero2_funcion)
  {
    numero_maximo = numero1_funcion;
  }
  else
  {
    numero_maximo = numero2_funcion;
  }

  return numero_maximo;
}