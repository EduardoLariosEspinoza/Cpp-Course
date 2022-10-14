#include <iostream>
using namespace std;

int main()
{
  int numelementos, num;
  cout << "Ingresa el numero de elmentos que tendra el array: ";
  cin >> numelementos;
  int numeros[numelementos];
  int numeros2[numelementos];

  for (int i = 0; i < numelementos; i++)
  {
    num = 0;
    cout << "Ingresa un numero al array: ";
    cin >> num;
    numeros[i] = num;
  }
  for (int i = 0; i < numelementos; i++)
  {
    numeros2[i] = numeros[i] * 2;
  }
  for (int i = 0; i < numelementos; i++)
  {
    cout << numeros2[i] << endl;
  }
  return 0;
}