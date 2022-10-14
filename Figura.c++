#include <iostream>
#include "LibroCalificaciones.h"
using std::cout;
using std::endl;

int main()
{

  LibroCalificaciones miLibrocalificaciones("Programacion");

  miLibrocalificaciones.mostrarMensaje();
  miLibrocalificaciones.recibirCalificaciones();
  miLibrocalificaciones.mostrarReporteCalificaciones();

  return 0;
}