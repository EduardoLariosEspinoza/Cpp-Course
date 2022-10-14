#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
  int matriz[20][20], matriz2[20][20];
  int filas, columnas;
  srand(time(NULL));

  //Pidiendo al usuario el numero de filas y columnas:
  cout << "Coloque el numero de filas: " << endl;
  cin >> filas;
  cout << "Coloque el numero de columnas: " << endl;
  cin >> columnas;
  cout << "\n";

  //Llenando la matriz de numeros aleatorios:
  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      matriz[i][j] = 1 + rand() % (8);
      matriz2[i][j] = matriz[i][j];   //Transfiriendo los datos de la matriz 1 a la matriz 2:
      cout << matriz2[i][j] << " | "; //Mostrando la matriz 2 al usuario:
    }
    cout << "\n";
  }
}