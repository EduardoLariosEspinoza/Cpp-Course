#include <iostream>
using namespace std;

int main()
{
  int x;
  do
  {
    cout << "Ingresa un numero entre 1-10: ";
    cin >> x;
  } while ((x < 1 || x > 10));

  for (int i = 1; i <= 20; i++)
  {
    cout << x << " * " << i << " = " << x * i << endl;
  }

  return 0;
}