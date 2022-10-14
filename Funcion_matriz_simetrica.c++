#include <iostream>

using namespace std;

void pedirMatriz();
void comprobar(int[][100], int, int);

int filas;
int columnas;
int mat[100][100];

int main()
{
  pedirMatriz();
  comprobar(mat, filas, columnas);
}

void pedirMatriz()
{
  cout << "Ingresa el numero de filas: ";
  cin >> filas;
  cout << "Ingresa el numero de columnas: ";
  cin >> columnas;

  cout << "Ingresa los valores de la matriz: " << endl;

  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      cin >> mat[i][j];
    }
  }
}

void comprobar(int mat_funcion[][100], int filas_funcion, int columnas_funcion)
{
  if (filas_funcion == columnas_funcion)
  {
    int contador = 0;
    for (int i = 0; i < filas_funcion; i++)
    {
      for (int j = 0; j < columnas_funcion; j++)
      {
        if (mat_funcion[i][j] == mat_funcion[j][i])
        {
          contador++;
        }
      }
    }

    if (contador == (filas_funcion * columnas_funcion))
    {
      cout << "La matriz es simetrica";
    }
    else
    {
      cout << "La matriz no es simetrica";
    }
  }
  else
  {
    cout << "La matriz no es simetrica";
  }
}