#include <iostream>
using namespace std;

int main()
{
  float x;
  cout << "Ingresa un numero: ";
  cin >> x;
  if (x == 0)
  {
    cout << "El numero es 0";
  }
  else if (x > 0)
  {
    cout << "El numero es positivo";
  }
  else
  {
    cout << "El numero es negativo";
  }

  return 0;
}