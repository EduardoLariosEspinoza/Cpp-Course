#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::getline;
using std::string;

#include "LibroCalificaciones.h"

LibroCalificaciones::LibroCalificaciones(string nombre) //El constructor tiene el mismo nombre de su clase
{
  establecerNombreCurso(nombre);
}

void LibroCalificaciones::establecerNombreCurso(string Nombre)
{
  nombreCurso = Nombre;
}

string LibroCalificaciones::obtenerNombreCurso()
{
  return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje()
{
  cout << "Bienvenido a " << nombreCurso << endl;
}