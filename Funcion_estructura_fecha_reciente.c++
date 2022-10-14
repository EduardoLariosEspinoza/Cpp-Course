#include <iostream>

using namespace std;

struct Fechas
{
  int dia, mes, año;
} fecha1, fecha2, fecha_reciente;

void pedirDatos();
Fechas comparar(Fechas, Fechas);
void imprimirFecha(Fechas);

int main()
{
  pedirDatos();
  comparar(fecha1, fecha2);
  imprimirFecha(fecha_reciente);

  // o

  // int x = comparar(fecha1, fecha2);
  // imprimirFecha(x);

  return 0;
}

void pedirDatos()
{
  cout << "Ingresa el dia de la primera fecha: ";
  cin >> fecha1.dia;
  cout << "Ingresa el mes de la primera fecha: ";
  cin >> fecha1.mes;
  cout << "Ingresa el año de la primera fecha: ";
  cin >> fecha1.año;

  cout << "Ingresa el dia de la segunda fecha: ";
  cin >> fecha2.dia;
  cout << "Ingresa el mes de la segunda fecha: ";
  cin >> fecha2.mes;
  cout << "Ingresa el año de la segunda fecha: ";
  cin >> fecha2.año;
}

Fechas comparar(Fechas fecha1_funcion, Fechas fecha2_funcion)
{
  if (fecha1_funcion.año == fecha2_funcion.año)
  {
    if (fecha1_funcion.mes == fecha2_funcion.mes)
    {
      if (fecha1_funcion.dia == fecha2_funcion.dia)
      {
        fecha_reciente.año = fecha1_funcion.año;
        fecha_reciente.mes = fecha1_funcion.mes;
        fecha_reciente.dia = fecha1_funcion.dia;
      }
      else if (fecha1_funcion.dia > fecha2_funcion.dia)
      {
        fecha_reciente.año = fecha1_funcion.año;
        fecha_reciente.mes = fecha1_funcion.mes;
        fecha_reciente.dia = fecha1_funcion.dia;
      }
      else
      {
        fecha_reciente.año = fecha2_funcion.año;
        fecha_reciente.mes = fecha2_funcion.mes;
        fecha_reciente.dia = fecha2_funcion.dia;
      }
    }
    else if (fecha1_funcion.mes > fecha2_funcion.mes)
    {
      fecha_reciente.año = fecha1_funcion.año;
      fecha_reciente.mes = fecha1_funcion.mes;
      fecha_reciente.dia = fecha1_funcion.dia;
    }
    else
    {
      fecha_reciente.año = fecha2_funcion.año;
      fecha_reciente.mes = fecha2_funcion.mes;
      fecha_reciente.dia = fecha2_funcion.dia;
    }
  }
  else if (fecha1_funcion.año > fecha2_funcion.año)
  {
    fecha_reciente.año = fecha1_funcion.año;
    fecha_reciente.mes = fecha1_funcion.mes;
    fecha_reciente.dia = fecha1_funcion.dia;
  }
  else
  {
    fecha_reciente.año = fecha2_funcion.año;
    fecha_reciente.mes = fecha2_funcion.mes;
    fecha_reciente.dia = fecha2_funcion.dia;
  }

  return fecha_reciente;
}

void imprimirFecha(Fechas resultado)
{
  cout << "La fecha mas reciente es: " << resultado.dia << "/" << resultado.mes << "/" << resultado.año;
}