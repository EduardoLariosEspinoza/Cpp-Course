#include <iostream>

using namespace std;

int mayor(int *, int);

int main()
{
  const int num_elementos = 5;
  int numeros[num_elementos] = {1, 2, 3, 4, 5};

  cout << "El numero mayor del array es: " << mayor(numeros, num_elementos);

  return 0;
}

int mayor(int *numeros_funcion, int num_elementos_funcion)
{
  int aux = 0;

  for (int i = 0; i < num_elementos_funcion; i++)
  {
    // Si el numero en, la posicion 1 del arreglo mas i, es mayor a la variable aux entonces ese es el nuevo valor de la variable aux
    // i empieza en 0 entonces es la primera posicion del array mas 0, lo cual sigue siendo la primera posicion. Despues es mas uno entonces es la siguiente posicion, etc
    if (*(numeros_funcion + i) > aux)
    {
      aux = *(numeros_funcion + i);
    }
  }

  return aux;
}