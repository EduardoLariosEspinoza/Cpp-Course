#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  int p, p1;
  long double x1, x2, x3, fx0, fx2, fxi, xi, r, e1, e2, e3, x0, d = 2, c, e;
  cout << "Metodo de la secante\n";
  cout << "La ecuacion cuenta con e^x o e^-x? 1--Si, Otro numero--No\n";
  cin >> p;
  cout << "Cual sera el porcentaje de error";
  cin >> e;
  if (p == 1)
  {
    cout << "Ingresa el valor de x2 (Si hay)\n";
    cin >> x2;
    cout << "A cuanto esta elevado?\n";
    cin >> e2;
    cout << "Ingresa el valor del numero sin x (Si hay)\n";
    cin >> c;
    cout << "Ingresa el valor de xi\n";
    cin >> xi;
    cout << "Ingresa el valor de xi-1\n";
    cin >> x0;
    cout << "e^x (1) o e^-x (2)";
    cin >> p1;
    if (p1 == 1)
    {
      fxi = (pow(2.7182818, xi)) + (x2 * (pow(xi, e2))) + c;
      fx0 = (pow(2.7182818, x0)) + (x2 * (pow(x0, e2))) + c;
      r = xi - ((fxi * (x0 - xi)) / (fx0 - fxi));
      x0 = xi;
      xi = r;
      while (d > e || d < ((-1) * e))
      {
        fxi = (pow(2.7182818, xi)) + (x2 * (pow(xi, e2))) + c;
        fx0 = (pow(2.7182818, x0)) + (x2 * (pow(x0, e2))) + c;
        r = xi - ((fxi * (x0 - xi)) / (fx0 - fxi));
        d = ((r - xi) / r) * 100;
        x0 = xi;
        xi = r;
      }
      cout << "La respuesta es " << r << endl;
    }
    else
    {
      fxi = (pow(2.7182818, (xi * -1))) + (x2 * (pow(xi, e2))) + c;
      fx0 = (pow(2.7182818, (x0 * -1))) + (x2 * (pow(x0, e2))) + c;
      r = xi - ((fxi * (x0 - xi)) / (fx0 - fxi));
      x0 = xi;
      xi = r;
      while (d > e || d < ((-1) * e))
      {
        fxi = (pow(2.7182818, (xi * -1))) + (x2 * (pow(xi, e2))) + c;
        fx0 = (pow(2.7182818, (x0 * -1))) + (x2 * (pow(x0, e2))) + c;
        r = xi - ((fxi * (x0 - xi)) / (fx0 - fxi));
        d = ((r - xi) / r) * 100;
        x0 = xi;
        xi = r;
      }
      cout << "La respuesta es " << r << endl;
    }
  }
  else
  {
    cout << "Ingresa el valor de x1\n";
    cin >> x1;
    cout << "A cuanto esta elevado?\n";
    cin >> e1;
    cout << "Ingresa el valor de x2\n";
    cin >> x2;
    cout << "A cuanto esta elevado?\n";
    cin >> e2;
    cout << "Ingresa el valor de x3\n";
    cin >> x3;
    cout << "A cuanto esta elevado?\n";
    cin >> e3;
    cout << "Ingresa el valor del numero sin x\n";
    cin >> c;
    cout << "Ingresa el valor de xi\n";
    cin >> xi;
    cout << "Ingresa el valor de xi-1\n";
    cin >> x0;
    fxi = ((pow(xi, e1)) * x1) + ((pow(xi, e2)) * x2) + ((pow(xi, e3)) * x3) + c;
    fx0 = ((pow(x0, e1)) * x1) + ((pow(x0, e2)) * x2) + ((pow(x0, e3)) * x3) + c;
    r = xi - ((fxi * (x0 - xi)) / (fx0 - fxi));
    x0 = xi;
    xi = r;
    while (d > e || d < ((-1) * e))
    {
      fxi = ((pow(xi, e1)) * x1) + ((pow(xi, e2)) * x2) + ((pow(xi, e3)) * x3) + c;
      fx0 = ((pow(x0, e1)) * x1) + ((pow(x0, e2)) * x2) + ((pow(x0, e3)) * x3) + c;
      r = xi - ((fxi * (x0 - xi)) / (fx0 - fxi));
      d = ((r - xi) / r) * 100;
      x0 = xi;
      xi = r;
    }

    cout << "La respuesta es " << r << endl;
  }

  return 0;
}