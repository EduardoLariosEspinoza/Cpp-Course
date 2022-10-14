#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char palabra[] = "Hola ";
  char palabra2[100];
  int tamano;

  cout << "Ingresa otra palabra: ";
  cin.getline(palabra2, 100, '\n');

  strcat(palabra, palabra2);
  cout << palabra;
}