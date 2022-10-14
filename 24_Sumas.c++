#include <iostream>
using namespace std;

int main()
{
  int x, s = 0;

  do
  {
    cout << "Ingresa un numero: ";
    cin >> x;

    if (x > 0)
    {
      s += x;
    }
  } while ((x != 0 && (x < 20 || x > 30)));
  cout << s;

  return 0;
}