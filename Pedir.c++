#include <iostream>
using namespace std;

int main()
{
  string fullName;
  cout << "Type your full name: ";
  getline(cin, fullName); //Te deja usar espacios en strings y no imprime el %. Le una linea entera de texto
  cout << "Your name is: " << fullName;

  string name;
  cout << "\nIngresa tu nombre: ";
  cin >> name; //NO te permite usar espacios en tus strings
  cout << "Tu nombre es " + name;

  int x = 5, y = 10;
  cout << max(x, y);

  return 0;
}