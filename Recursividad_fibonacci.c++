#include <iostream>

using namespace std;

int fibonacci(int);

int aux = 0;

int main()
{
  int numero, resultado;

  do
  {
    cout << "Ingresa el limite de la serie de fibonacci. Posicion: ";
    cin >> numero;
  } while (numero <= 0);

  if (numero == 1)
  {
    cout << "0";
  }
  else if (numero == 2)
  {
    cout << "0, 1";
  }

  if (numero > 2)
  {
    fibonacci(numero);
  }

  // resultado = fibonacci(numero);

  // cout << "\nLa serie de fibonacci hasta la posicion " << numero << " es " << resultado;

  return 0;
}

int fibonacci(int numero_funcion)
{
  if (numero_funcion == 2)
  {
    numero_funcion = 1;
  }
  else if (numero_funcion == 1)
  {
    numero_funcion = 0;
  }
  else
  {
    numero_funcion = fibonacci(numero_funcion - 1) + fibonacci(numero_funcion - 2);
    if (numero_funcion > aux)
    {
      aux = numero_funcion;
      cout << ", " << numero_funcion;
    }
  }

  return numero_funcion;
}