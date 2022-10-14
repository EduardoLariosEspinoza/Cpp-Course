#include <iostream>

using namespace std;

void pedirNumero();
void cuadrado(float numero_funcion);

float numero;

int main()
{
  pedirNumero();
  cuadrado(numero);

  return 0;
}

void pedirNumero()
{
  cout << "Ingresa un numero: ";
  cin >> numero;
}

void cuadrado(float numero_funcion)
{
  float resultado;
  resultado = numero * numero;
  cout << "El numero " << numero << " al cuadrado es: " << resultado;
}