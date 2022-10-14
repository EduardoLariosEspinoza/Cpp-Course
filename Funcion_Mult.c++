#include <iostream>

using namespace std;

void pedirDatos();
void mult(float, float);

float numero1, numero2;

int main()
{
  pedirDatos();
  mult(numero1, numero2);

  return 0;
}

void pedirDatos()
{
  cout << "Escribe dos numeros: ";
  cin >> numero1 >> numero2;
}

void mult(float numero1_funcion, float numero2_funcion)
{
  float resultado;

  resultado = numero1_funcion * numero2_funcion;

  cout << "El resultado de la multiplicacion es: " << resultado << endl;
}