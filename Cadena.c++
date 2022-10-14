#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char texto[10];

  cout << "Ingresa un texto: ";
  cin.getline(texto, 10, '\n');

  cout << texto;
  return 0;
}