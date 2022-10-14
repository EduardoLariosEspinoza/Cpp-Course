#include <iostream>

using namespace std;

struct Estructura_Ciclista
{
  int horas;
  int minutos;
  int segundos;
} etapas[100];

int main()
{
  int numero_de_etapas, horas_totales = 0, minutos_totales = 0, segundos_totales = 0;

  cout << "Escriba el numero de etapas que tiene el recorrido: ";
  cin >> numero_de_etapas;

  for (int i = 0; i < numero_de_etapas; i++)
  {
    cout << "Horas: ";
    cin >> etapas[i].horas;
    cout << "Minutos: ";
    cin >> etapas[i].minutos;
    cout << "Segundos: ";
    cin >> etapas[i].segundos;

    horas_totales += etapas[i].horas;
    minutos_totales += etapas[i].minutos;
    segundos_totales += etapas[i].segundos;

    if (segundos_totales >= 60)
    {
      segundos_totales -= 60;
      minutos_totales += 1;
    }

    if (minutos_totales >= 60)
    {
      minutos_totales -= 60;
      horas_totales += 1;
    }

    cout << "\n";
  }

  cout << "\nEl tiempo total del ciclista es: \n";
  cout << "Horas: " << horas_totales << endl;
  cout << "Minutos: " << minutos_totales << endl;
  cout << "Segundos: " << segundos_totales << endl;

  return 0;
}