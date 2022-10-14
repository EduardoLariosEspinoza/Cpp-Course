#include <iostream>
#include <math.h>

using namespace std;

void pedirDatos();
void funpot(int numero_funcion, int n_elevar_funcion);

int numero, n_elevar;

int main()
{
  pedirDatos();
  funpot(numero, n_elevar);

  return 0;
}

void pedirDatos()
{
  cout << "Escribe un valor: ";
  cin >> numero;
  cout << "Escribe el exponente: ";
  cin >> n_elevar;
}

void funpot(int numero_funcion, int n_elevar_funcion)
{
  long resultado;

  resultado = pow(numero_funcion, n_elevar_funcion);

  cout << "El resultado es: " << resultado;
}