#include <iostream>

using namespace std;

struct NumerosC
{
  float real;
  float imaginario;
} numero_c_1, numero_c_2, numero_c_3;

void pedirDatos();
NumerosC suma(NumerosC, NumerosC);
void imprimirSuma(NumerosC);

int main()
{
  pedirDatos();
  suma(numero_c_1, numero_c_2);
  imprimirSuma(numero_c_3);

  // o

  // int x = suma(numero_c_1, numero_c_2);
  // imprimirSuma(x);

  return 0;
}

void pedirDatos()
{
  cout << "Ingresa el valor real del primer numero complejo: ";
  cin >> numero_c_1.real;
  cout << "Ingresa el valor imaginario del primer numero complejo: ";
  cin >> numero_c_1.imaginario;

  cout << "Ingresa el valor real del segundo numero complejo: ";
  cin >> numero_c_2.real;
  cout << "Ingresa el valor imaginario del segundo numero complejo: ";
  cin >> numero_c_2.imaginario;
}

NumerosC suma(NumerosC numero_c_1_funcion, NumerosC numero_c_2_funcion)
{
  numero_c_3.real = numero_c_1_funcion.real + numero_c_2_funcion.real;
  numero_c_3.imaginario = numero_c_1_funcion.imaginario + numero_c_2_funcion.imaginario;

  return numero_c_3;
}

void imprimirSuma(NumerosC resultado)
{
  cout << "\nEl numero complejo resultante es: " << resultado.real << " + (" << resultado.imaginario << "i)";
}