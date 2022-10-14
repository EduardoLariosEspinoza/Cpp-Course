#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int d, c;
  double x, x0, x1, x2, fx0, fx1, fx2, r, p = 1, fx, b1, b2;
  cout << "Que operacion queires hacer?\n";
  cout << "1 = Interpolacion lineal\n";
  cout << "2 = Interpolacion cuadratica\n";
  cout << "3 = Interpolacion de langrange de primer orden\n";
  cout << "4 = Interpolacion de langrange de segundo orden\n";
  cin >> d;
  do
  {
    switch (d)
    {
    case 1:
      cout << "Ingresa el valor de x\n";
      cin >> x;
      cout << "Ingresa el valor de x0\n";
      cin >> x0;
      cout << "Ingresa el valor de x1\n";
      cin >> x1;
      cout << "Ingresa el valor exacto de f(x) si lo tienes, sino entonces simplemente ingresa 0\n";
      cin >> fx;
      cout << "Ingresa el valor de f(x0)\n";
      cin >> fx0;
      cout << "Ingresa el valor de f(x1)\n";
      cin >> fx1;
      if (x > x1 || x < x0)
      {
        cout << "Lo que se hara es una extrapolacion" << endl;
      }
      r = fx0 + (((fx1 - fx0) / (x1 - x0)) * (x - x0));
      cout << "La respuesta es " << r << endl;
      //Si fx es 0 entonces no se conoce
      if (fx != 0)
      {
        p = ((fx - r) / fx) * 100;
        cout << "El error porcentual es " << p << "%";
      }
      p = 0;
      break;
    case 2:
      cout << "Ingresa el valor de x\n";
      cin >> x;
      cout << "Ingresa el valor de x0\n";
      cin >> x0;
      cout << "Ingresa el valor de x1\n";
      cin >> x1;
      cout << "Ingresa el valor de x2\n";
      cin >> x2;
      cout << "Ingresa el valor exacto de f(x) si lo tienes, sino entonces simplemente ingresa 0\n";
      cin >> fx;
      cout << "Ingresa el valor de f(x0)\n";
      cin >> fx0;
      cout << "Ingresa el valor de f(x1)\n";
      cin >> fx1;
      cout << "Ingresa el valor de f(x2)\n";
      cin >> fx2;
      if (x > x2 || x < x0)
      {
        cout << "Lo que se hara es una extrapolacion" << endl;
      }
      b1 = (fx1 - fx0) / (x1 - x0);
      b2 = (((fx2 - fx1) / (x2 - x1)) - ((fx1 - fx0) / (x1 - x0))) / (x2 - x0);
      r = fx0 + b1 * (x - x0) + b2 * (x - x0) * (x - x1);
      cout << "La respuesta es " << r << endl;
      if (fx != 0)
      {
        p = ((fx - r) / fx) * 100;
        cout << "El error porcentual es " << p;
      }
      p = 0;

      break;
    case 3:
      cout << "Ingresa el valor de x\n";
      cin >> x;
      cout << "Ingresa el valor de x0\n";
      cin >> x0;
      cout << "Ingresa el valor de x1\n";
      cin >> x1;
      cout << "Ingresa el valor exacto de f(x) si lo tienes, sino entonces simplemente ingresa 0\n";
      cin >> fx;
      cout << "Ingresa el valor de f(x0)\n";
      cin >> fx0;
      cout << "Ingresa el valor de f(x1)\n";
      cin >> fx1;
      if (x > x1 || x < x0)
      {
        cout << "Lo que se hara es una extrapolacion" << endl;
      }
      r = (((x - x1) / (x0 - x1)) * fx0) + (((x - x0) / (x1 - x0)) * fx1);
      cout << "La respuesta es " << r << endl;
      //Si fx es 0 entonces no se conoce
      if (fx != 0)
      {
        p = ((fx - r) / fx) * 100;
        cout << "El error porcentual es " << p << "%";
      }
      p = 0;

      break;
    case 4:
      cout << "Ingresa el valor de x\n";
      cin >> x;
      cout << "Ingresa el valor de x0\n";
      cin >> x0;
      cout << "Ingresa el valor de x1\n";
      cin >> x1;
      cout << "Ingresa el valor de x2\n";
      cin >> x2;
      cout << "Ingresa el valor exacto de f(x) si lo tienes, sino entonces simplemente ingresa 0\n";
      cin >> fx;
      cout << "Ingresa el valor de f(x0)\n";
      cin >> fx0;
      cout << "Ingresa el valor de f(x1)\n";
      cin >> fx1;
      cout << "Ingresa el valor de f(x2)\n";
      cin >> fx2;
      if (x > x2 || x < x0)
      {
        cout << "Lo que se hara es una extrapolacion" << endl;
      }
      r = (((x - x1) / (x0 - x1)) * ((x - x2) / (x0 - x2)) * fx0) + (((x - x0) / (x1 - x0)) * ((x - x2) / (x1 - x2)) * fx1) + (((x - x0) / (x2 - x0)) * ((x - x1) / (x2 - x1)) * fx2);
      cout << "La respuesta es " << r << endl;
      if (fx != 0)
      {
        p = ((fx - r) / fx) * 100;
        cout << "El error porcentual es " << p;
      }
      p = 0;

      break;
    default:

      break;
    }
  } while (p == 1);

  return 0;
}