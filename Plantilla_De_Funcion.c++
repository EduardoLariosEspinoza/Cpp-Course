#include <iostream>

using namespace std;

template <class TIPOD>
void mostrarAbsoluto(TIPOD numero_funcion);

int main()
{
  int numeroi = -2;
  float numerof = -3.34;
  double numerod = -3.1232;

  mostrarAbsoluto(numeroi);
  mostrarAbsoluto(numerof);
  mostrarAbsoluto(numerod);

  return 0;
}

template <class TIPOD>
void mostrarAbsoluto(TIPOD numero_funcion)
{
  if (numero_funcion < 0)
  {
    numero_funcion *= -1;
  }

  cout << "El valor absoluto del numero es: " << numero_funcion << endl;
}