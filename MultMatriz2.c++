#include <iostream>
#include <time.h>
using namespace std;

int main(int argc, char *argv[])
{
  int v1[3][3], v2[3][3], v3[3][3];
  srand(time(NULL));
  cout << "\t"
       << "La primera matriz es: " << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      v1[i][j] = 0 + rand() % (5);
      cout << "\t" << v1[i][j] << " ";
    }
    cout << "\n";
  }
  cout << "\n";
  cout << "\n";
  cout << "\n";
  cout << "\tLa segunda matriz es: " << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      v2[i][j] = 0 + rand() % (5);
      cout << "\t" << v2[i][j] << " ";
    }
    cout << "\n";
  }
  //producto de las 2 matrices
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      v3[i][j] = 0;
      for (int k = 0; k < 3; k++)
      {

        v3[i][j] += v1[i][k] * v2[k][j]; //--> Se utiliza otro for para poder dejar quietas las filas y moverse en las columnas en v1
                                         // y en v2 se dejan fijas las columnas y se varian las filas para poder hacer el producto de filas por columnas y sumar, asi obtengo la matriz 3
      }
    }
  }
  //muestro la tercer matriz
  cout << "\n";
  cout << "\n";
  cout << "\tLa tercer matriz es:" << endl;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "\t" << v3[i][j];
    }
    cout << "\n";
  }

  return 0;
}