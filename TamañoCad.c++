#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char texto[100];
  int tamano;

  cout << "Ingresa un texto: ";
  cin.getline(texto, 100, '\n');
  tamano = strlen(texto);

  cout << "El tamaño del texto es de " << tamano << endl;

  if (tamano > 10)
  {
    cout << "El texto es "
         << " \"" << texto << "\" ";
  }

  return 0;
}