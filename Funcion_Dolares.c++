#include <iostream>

using namespace std;

void cambio(int, int &, int &, int &, int &, int &, int &);

int main()
{
  int valor, cien = 100, cincuenta = 50, veinte = 20, diez = 10, cinco = 5, uno = 1;

  cout << "Ingresa una cantidad: ";
  cin >> valor;

  cout << "Los billetes serian: \n";
  cambio(valor, cien, cincuenta, veinte, diez, cinco, uno);
  cout << "Billetes de 100: " << cien;
  cout << "\nBilletes de 50: " << cincuenta;
  cout << "\nBilletes de 20: " << veinte;
  cout << "\nBilletes de 10: " << diez;
  cout << "\nBilletes de 5: " << cinco;
  cout << "\nBilletes de 1: " << uno;

  return 0;
}

void cambio(int valor, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno)
{
  cien = valor / 100;
  valor %= 100;
  cincuenta = valor / 50;
  valor %= 50;
  veinte = valor / 20;
  valor %= 20;
  diez = valor / 10;
  valor %= 10;
  cinco = valor / 5;
  uno = valor % 5;

  /* while (valor != 0)
  {
    if (valor >= cien)
    {
      valor -= 100;
      cout << "+1 Billete de 100\n";
    }
    else
    {
      if (valor >= 50)
      {
        valor -= 50;
        cout << "+1 Billete de 50\n";
      }
      else
      {
        if (valor >= 20)
        {
          valor -= 20;
          cout << "+1 Billete de 20\n";
        }
        else
        {
          if (valor >= 10)
          {
            valor -= 10;
            cout << "+1 Billete de 10\n";
          }
          else
          {
            if (valor >= 5)
            {
              valor -= 5;
              cout << "+1 Billete de 5\n";
            }
            else
            {
              if (valor >= 1)
              {
                valor -= 1;
                cout << "+1 Billete de 1\n";
              }
            }
          }
        }
      }
    }
  } */
}