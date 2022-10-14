#include <iostream>

using namespace std;

int factorial(int);

int main()
{
  int numero, resultado;

  cout << "Ingresa el numero para sacar factorial: ";
  cin >> numero;

  resultado = factorial(numero);

  cout << "\nEl factorial de " << numero << " es " << resultado;

  return 0;
}

int factorial(int numero_funcion)
{
  if (numero_funcion == 0)
  {
    numero_funcion = 1;
  }
  else
  {
    numero_funcion *= factorial(numero_funcion - 1);
  }

  return numero_funcion;
}