#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "LibroCalificaciones.h"

LibroCalificaciones::LibroCalificaciones(string nombre)
{
  establecerNombreCurso(nombre);
  calificacionMaxima = 0;
}

void LibroCalificaciones::establecerNombreCurso(string nombre)
{
  if (nombre.length() <= 25)
  {
    nombreCurso = nombre;
  }
  else
  {
    nombreCurso = nombre.substr(0, 25);
    cout << "El nombre " << nombre << " exede los 25 caracteres entonces solo se dejaron los primeros caracteres" << endl;
  }
}

string LibroCalificaciones::obtenerNombreCurso()
{
  return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje()
{
  cout << "El nombre del curso es: " << obtenerNombreCurso();
}

void LibroCalificaciones::recibirCalificaciones()
{
  int calificacion1;
  int calificacion2;
  int calificacion3;

  cout << "\nEscribe las tres calificaciones: ";
  cin >> calificacion1 >> calificacion2 >> calificacion3;

  calificacionMaxima = maximo(calificacion1, calificacion2, calificacion3);
}

int LibroCalificaciones::maximo(int x, int y, int z)
{
  int valorMaximo = x;

  if (y > valorMaximo)
    valorMaximo = y;

  if (z > valorMaximo)
    valorMaximo = z;

  return valorMaximo;
}

void LibroCalificaciones::mostrarReporteCalificaciones()
{
  cout << "La calificacion mas alta fue: " << calificacionMaxima;
}