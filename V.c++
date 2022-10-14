#include <iostream>
using namespace std;

int main()
{
  int numelementos, num;
  cout << "Ingresa el numero de elmentos que tendra el array: ";
  cin >> numelementos;
  int numeros[numelementos];
  for (int i = 0; i < numelementos; i++)
  {
    num = 0;
    cout << "Ingresa un numero al array: ";
    cin >> num;
    numeros[i] = num;
  }
  for (int i = numelementos - 1; i > (-1); i--)
  {
    cout << "La posicion numero " << i << " del array es " << numeros[i] << endl;
  }
  return 0;
}