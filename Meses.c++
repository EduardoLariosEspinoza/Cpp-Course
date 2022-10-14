#include <iostream>
using namespace std;

int main()
{
  int m;
  cout << "Ingresa el numero del mes: ";
  cin >> m;
  switch (m)
  {
  case 1:
    cout << "Ese mes es Enero";
    break;
  case 2:
    cout << "Ese mes es Febrero";
    break;
  case 3:
    cout << "Ese mes es Marzo";
    break;
  case 4:
    cout << "Ese mes es Abril";
    break;
  case 5:
    cout << "Ese mes es Mayo";
    break;
  case 6:
    cout << "Ese mes es Junio";
    break;
  case 7:
    cout << "Ese mes es Julio";
    break;
  case 8:
    cout << "Ese mes es Agosto";
    break;
  case 9:
    cout << "Ese mes es Septiembre";
    break;
  case 10:
    cout << "Ese mes es Octubre";
    break;
  case 11:
    cout << "Ese mes es Noviembre";
    break;
  case 12:
    cout << "Ese mes es Diciembre";
    break;

  default:
    cout << "Ese numero de mes no existe";
    break;
  }

  return 0;
}