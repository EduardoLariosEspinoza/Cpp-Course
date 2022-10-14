#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int e, r = 0;
  cout << "Ingresa el numero al que quieres elevar el 2 y sumar las elevaciones: ";
  cin >> e;
  for (int i = 1; i <= e; i++)
  {
    r += pow(2, i);
  }
  cout << "La suma de todas los exponentes de 2 hasta el numero introducido es: " << r;

  return 0;
}