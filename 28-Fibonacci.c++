#include <iostream>
using namespace std;

int main()
{
  int x, s = 1, p = 0, f = 1;
  cout << "Serie fibonacci = 1,1,2,3,5,8,13,21,etc." << endl;
  cout << "Ingresa hasta que numero se hara la serie fibonacci: ";
  cin >> x;
  for (int i = 1; i <= x; i++)
  {
    cout << f << ", ";
    f = s + p;
    p = s;
    s = f;
  }

  return 0;
}