#include <iostream>
using namespace std;

int main()
{
  int numeros[] = {1, 6, 8, 9, 2};
  int suma = 0;
  for (int i = 0; i < 5; i++)
  {
    suma += numeros[i];
  }
  cout << "La suma de los numeros en el array es de: " << suma;
  return 0;
}