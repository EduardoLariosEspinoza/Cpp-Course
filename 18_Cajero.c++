#include <iostream>
using namespace std;

int main()
{
  int i = 1000, o;
  float d = 0, s = 0, r = 0;
  cout << "\tBienvenido a su cajero automatico" << endl;
  cout << "1.Ingresar dinero" << endl;
  cout << "2.Retirar dinero" << endl;
  cout << "3.Salir" << endl;
  cout << "Desea hacer la accion numero: ";
  cin >> o;

  switch (o)
  {
  case 1:
    cout << "Cuanto dinero desea ingresar?: ";
    cin >> d;
    s = i + d;
    cout << "El total de dinero en tu cuenta es de " << s;
    break;
  case 2:
    cout << "Cuanto dinero deseas retirar?: ";
    cin >> r;
    if (r > i)
    {
      cout << "No puedes retirar mas dinero del que tienes, acutalmente tienes " << i;
    }
    else
    {
      s = i - r;
      cout << "El dinero actual de tu cuente es de: " << s;
    }
    break;
  case 3:
    cout << "Saliendo...";
    break;

  default:
    cout << "Ingresa un numero entre 1-3 para realizar una de las acciones";
    break;
  }

  return 0;
}