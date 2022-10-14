#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include <string>

using std::getline;
using std::string;

class LibroCalificaciones
{
public:
  LibroCalificaciones(string);
  void establecerNombreCurso(string);
  string obtenerNombreCurso();
  void mostrarMensaje();
  void recibirCalificaciones();
  void mostrarReporteCalificaciones();
  int maximo(int, int, int);

private:
  string nombreCurso;
  int calificacionMaxima;
};