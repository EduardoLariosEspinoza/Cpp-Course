#include <iostream>

using namespace std;

void pedirDato();
float fraccionario(float numero_funcion);

float numero;

int main()
{
  pedirDato();

  cout << "La parte fraccionaria del numero es: " << fraccionario(numero);
  return 0;
}

void pedirDato()
{
  cout << "Escribe un numero: ";
  cin >> numero;
}

float fraccionario(float numero_funcion)
{
  int numero_entero = numero_funcion;
  float resultado;

  resultado = numero_funcion - numero_entero;

  return resultado;
}