#include <iostream>
#include <string.h>

using namespace std;

int main()
{
  char palabra[30];
  int a = 0, e = 0, i = 0, o = 0, u = 0;

  cout << "Ingresa una palabra: ";
  cin.getline(palabra, 30, '\n');

  for (int j = 0; j < 30; j++)
  {
    switch (palabra[j])
    {
    case 'a':
      a++;
      break;

    case 'e':
      e++;
      break;

    case 'i':
      i++;
      cout << "kjnwd";
      break;

    case 'o':
      o++;
      break;

    case 'u':
      u++;
      break;

    default:
      break;
    }
  }
  cout << "\nHay " << a << " letras a en esa palabra";
  cout << "\nHay " << e << " letras e en esa palabra";
  cout << "\nHay " << i << " letras i en esa palabra";
  cout << "\nHay " << o << " letras o en esa palabra";
  cout << "\nHay " << u << " letras u en esa palabra";

  return 0;
}