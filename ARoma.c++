#include <iostream>
using namespace std;

int main()
{
  int a, u, d, c, m;
  cout << "Ingresa un numero entre 1000 y 4000: ";
  cin >> a;
  u = a % 10;
  a /= 10;
  d = a % 10;
  a /= 10;
  c = a % 10;
  a /= 10;
  m = a % 10;
  a /= 10;
  switch (m)
  {
  case 1:
    cout << "M";
    break;
  case 2:
    cout << "MM";
    break;
  case 3:
    cout << "MMM";
    break;

  default:
    cout << "El numero se sale del rango establecido";
    break;
  }

  switch (c)
  {
  case 0:
    cout << "";
    break;
  case 1:
    cout << "C";
    break;
  case 2:
    cout << "CC";
    break;
  case 3:
    cout << "CCC";
    break;
  case 4:
    cout << "CCCC";
    break;
  case 5:
    cout << "D";
    break;
  case 6:
    cout << "DC";
    break;
  case 7:
    cout << "DCC";
    break;
  case 8:
    cout << "DCCC";
    break;
  case 9:
    cout << "DCCCC";
    break;
  }

  switch (d)
  {
  case 0:
    cout << "";
    break;
  case 1:
    cout << "X";
    break;
  case 2:
    cout << "XX";
    break;
  case 3:
    cout << "XXX";
    break;
  case 4:
    cout << "XXXX";
    break;
  case 5:
    cout << "L";
    break;
  case 6:
    cout << "LX";
    break;
  case 7:
    cout << "LXX";
    break;
  case 8:
    cout << "LXXX";
    break;
  case 9:
    cout << "LXXXX";
    break;
  }

  switch (u)
  {
  case 0:
    cout << "";
    break;
  case 1:
    cout << "I";
    break;
  case 2:
    cout << "II";
    break;
  case 3:
    cout << "III";
    break;
  case 4:
    cout << "IIII";
    break;
  case 5:
    cout << "V";
    break;
  case 6:
    cout << "VI";
    break;
  case 7:
    cout << "VII";
    break;
  case 8:
    cout << "VIII";
    break;
  case 9:
    cout << "VIIII";
    break;
  }

  return 0;
}