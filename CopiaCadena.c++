#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char texto[100];
  char texto2[100];
  int tamano;

  cout << "Ingresa un texto: ";
  cin.getline(texto, 100, '\n');
  tamano = strlen(texto);

  strcpy(texto2, texto);

  cout << "El texto es: " << texto2;
}