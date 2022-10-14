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
  void establecerNombreCurso(string Nombre)
  {
    nombreCurso = Nombre;
  }

  string obtenerNombreCurso()
  {
    return nombreCurso;
  }

  void mostrarMensaje()
  {
    cout << "Bienvenido a " << nombreCurso << endl;
  }

private:
  string nombreCurso;
};

int main()
{
  string nombreDelCurso;
  LibroCalificaciones miLibroCalificaciones; //Se crea un objeto de la clase

  cout << "El nombre del curso es: " << miLibroCalificaciones.obtenerNombreCurso() << endl;

  cout << "Escribe el nombre del curso: ";
  getline(cin, nombreDelCurso);
  miLibroCalificaciones.establecerNombreCurso(nombreDelCurso);
  cout << endl;

  miLibroCalificaciones.mostrarMensaje(); //El objeto creado llama a la funcion mostrarMensaje

  return 0;
}