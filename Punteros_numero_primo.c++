#include <iostream>

using namespace std;

int main()
{
  int numero, *dir_numero, contador = 0;

  cout << "Ingrese un numero: ";
  cin >> numero;

  dir_numero = &numero;

  for (int i = 2; i <= *dir_numero; i++)
  {
    if (*dir_numero % i == 0)
    {
      contador += 1;
    }
  }

  if (contador >= 2)
  {
    cout << "El numero " << *dir_numero << " no es un numero primo y esta guardado en la direccion: " << dir_numero;
  }
  else
  {
    cout << "El numero " << *dir_numero << " es un numero primo y esta guardado en la direccion: " << dir_numero;
  }

  return 0;
}