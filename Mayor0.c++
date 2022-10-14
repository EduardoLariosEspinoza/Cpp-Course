#include <iostream>
using namespace std;

int main()
{
  int x, i = 0;

  do
  {
    cout << "Ingresa un numero: ";
    cin >> x;

    if (x > 0)
    {
      i += 1;
    }
  } while ((x < 0 || x > 0));
  cout << i;

  return 0;
}