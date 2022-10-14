#include <iostream>

using namespace std;

void intercambio(float *, float *);

int main()
{
  float num1 = 56.11, num2 = 11.56;
  cout << "Valor del primer numero: " << num1 << endl;
  cout << "Valor del segundo numero: " << num2 << endl;

  cout << "\n\nIntercambiando los datos...";
  intercambio(&num1, &num2);

  cout << "\n\nValor del primer numero: " << num1 << endl;
  cout << "Valor del segundo numero: " << num2 << endl;

  return 0;
}

void intercambio(float *num1_funcion, float *num2_funcion)
{
  float aux;

  aux = *num1_funcion;
  *num1_funcion = *num2_funcion;
  *num2_funcion = aux;
}