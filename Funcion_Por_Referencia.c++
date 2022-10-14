#include <iostream>

using namespace std;

void valNuevo(int &, int &);

int main()
{
  int numero1, numero2;

  cout << "Escribe dos numeros: ";
  cin >> numero1 >> numero2;

  valNuevo(numero1, numero2);

  cout << "El valor nuevo del primer numero es: " << numero1 << endl;
  cout << "El valor nuevo del segundo numero es: " << numero2 << endl;

  return 0;
}

void valNuevo(int &xnumero, int &ynumero)
{
  cout << "El valor del primer numero es: " << xnumero << endl;
  cout << "El valor del segundo numero es: " << ynumero << endl;

  xnumero = 98;
  ynumero = 89;
}