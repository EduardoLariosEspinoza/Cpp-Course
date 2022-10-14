#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int tirarDados();

int main()
{
  // Crear un tipo de variable que tenga como posibles valores los que declaremos dentro
  enum Estado
  {
    CONTINUAR,
    GANO,
    PERDIO
  };

  int miPunto;
  Estado estadoJuego;

  // Hacemos que el reloj de la computadora, que se nos asigna para darnos numeros aleatorios, no sea el mismo y que recibamos valores diferentes
  srand(time(NULL));

  int sumaDeDados = tirarDados();

  switch (sumaDeDados)
  {
  case 7:
  case 11:
    estadoJuego = GANO;
    break;

  case 2:
  case 3:
  case 12:
    estadoJuego = PERDIO;
    break;

  default:
    estadoJuego = CONTINUAR;
    miPunto = sumaDeDados;
    cout << "Mi punto es: " << miPunto << endl;
    break;
  }

  while (estadoJuego == CONTINUAR)
  {
    sumaDeDados = tirarDados();

    if (sumaDeDados == miPunto)
      estadoJuego = GANO;
    else if (sumaDeDados == 7)
      estadoJuego = PERDIO;
  }

  if (estadoJuego == GANO)
    cout << "El jugador gano" << endl;
  else
    cout << "El jugador perdio" << endl;

  return 0;
}

int tirarDados()
{
  int dado1 = 1 + rand() % 6;
  int dado2 = 1 + rand() % 6;

  int suma = dado1 + dado2;

  cout << "El jugador tiro " << dado1 << " y " << dado2 << " entonces sacó " << suma << endl;
  return suma;
}