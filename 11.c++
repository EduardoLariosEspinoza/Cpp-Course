#include <iostream>
using namespace std;

int main()
{
  int x, y = 5;
  cout << "Ingresa un numero: ";
  cin >> x;
  if (x != y)
  {
    cout << "El numero no es 5";
  }
  else
  {
    cout << "El numero es 5";
  }

  return 0;
}