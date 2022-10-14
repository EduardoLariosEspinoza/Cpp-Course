#include <iostream>

using namespace std;

int elevar(int, int);

int main()
{
  int numero, potencia, resultado;

  cout << "Ingresa un numero: ";
  cin >> numero;
  cout << "Ingresa una potencia: ";
  cin >> potencia;

  cout << "El numero " << numero << " elevado a la " << potencia << " es: " << elevar(numero, potencia);

  return 0;
}

int elevar(int numero_funcion, int potencia_funcion)
{
  if (potencia_funcion == 1)
  {
    numero_funcion = numero_funcion;
  }
  else
  {
    numero_funcion *= elevar(numero_funcion, potencia_funcion - 1);
  }

  return numero_funcion;
}