#include <iostream>

using namespace std;

int suma(int);

int main()
{
  int numero, resultado;

  do
  {
    cout << "Ingresa el numero para sacar suma: ";
    cin >> numero;
  } while (numero <= 0);

  resultado = suma(numero);

  cout << "\nLa suma del 1 al " << numero << " es " << resultado;

  return 0;
}

int suma(int numero_funcion)
{
  int aux = 0;

  if (numero_funcion == 1)
  {
    aux = 1;
  }
  else
  {
    aux = numero_funcion + suma(numero_funcion - 1);
  }

  return aux;
}