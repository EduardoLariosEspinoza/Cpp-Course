#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int numero, variable, recipiente;
  cout << "Ingresa el numero que quieres factorizar en numero primos (El numero no debe ser primo): ";
  cin >> numero;
  variable = numero;
  cout << "1";

  // Funciona ya que se busca el minimo divisor de un numero y por ejemplo si un numero es divisible entre 4, entonces tambien es divisble entre 2 que si es un numero primo
  for (int i = 2; i <= (numero + 1); i++)
  {
    if (variable % i == 0)
    {
      // Si el numero si es divisible entre i, entonces se divide y se guarda el resultado en la variable, entonces se imprime el valor de i
      variable /= i;
      cout << "x" << i;

      // Asi entonces se vuelve a empezar el proceso con el nuevo valor de la variable, i se vuelve a inicializar en uno ya que puede que el siguiente numero tambien sea divisible entre el mismo valor que tenia. Por ejemplo 24/2 = 12, pero 12 tambien es divisible entre 2
      i = 1;
    }
  }
  return 0;
}