#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char palabra[100];
  char palabra2[100];
  int tamano;

  cout << "Ingresa una palabra: ";
  cin.getline(palabra, 100, '\n');

  cout << "Ingresa otra palabra: ";
  cin.getline(palabra2, 100, '\n');

  if (strcmp(palabra2, palabra) == 0)
  {
    cout << "Las palabras son iguales";
  }
  else if (palabra > palabra2)
  {
    cout << "La palabra " << palabra << " es mayor alfabeticamente";
  }
  else
  {
    cout << "La palabra " << palabra2 << " es mayor alfabeticamente";
  }
}