#include <iostream>
using namespace std;

int main()
{
  int n, d, i = 2;
  srand(time(NULL));
  d = 1 + rand() % (100);
  cout << "Escribe un numero: ";
  cin >> n;
  do
  {
    if (n < d)
    {
      cout << "Ingresa un numero mayor: ";
      cin >> n;
    }
    if (n > d)
    {
      cout << "Ingresa un numero menor: ";
      cin >> n;
    }
    i++;
  } while (d != n);
  cout << "El numero era: " << n << endl;
  cout << "Requeriste " << i << " intentos";
  return 0;
}