#include <iostream>

using namespace std;

void pedirDatos();
void comprobarMenor(int[][100], int, int, int);

int filas;
int columnas;
int fila;
int mat[100][100];

int main()
{
  pedirDatos();
  comprobarMenor(mat, filas, columnas, fila);
  return 0;
}

void pedirDatos()
{
  cout << "Ingresa el numero de filas: ";
  cin >> filas;
  cout << "Ingresa el numero de columnas: ";
  cin >> columnas;
  cout << "Ingresa la fila que deseas saber el valor mas bajo: ";
  cin >> fila;

  cout << "Ingresa los valores de la matriz: " << endl;

  for (int i = 0; i < filas; i++)
  {
    for (int j = 0; j < columnas; j++)
    {
      cin >> mat[i][j];
    }
  }
}

void comprobarMenor(int mat_funcion[][100], int filas_funcion, int columnas_funcion, int fila_funcion)
{

  int aux = mat_funcion[fila_funcion][1];
  int aux_col = 0;

  for (int j = 0; j < columnas_funcion; j++)
  {
    if (mat_funcion[fila][j] < aux)
    {
      aux = mat_funcion[fila][j];
      aux_col = j;
    }
  }

  cout << "El valor mas bajo de la fila " << fila_funcion << " es " << aux << " que esta en la columna " << aux_col;
}