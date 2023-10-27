#include <Ventana.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <Controlador.hpp>
#include <Link.hpp>
#include <curses.h>
#include <unistd.h>
#include <list>


using namespace std;

int main(int argc, char const *argv[])
{
    Ventana v;
    Dibujo d("Link");
    d.Dibujar();

    v.iniciar();
    v.Dibujar();
   // Dibujo d("Link");
  //d.Dibujar();

// Link* link = new Link();
//  Controlador* control = new Controlador();

// Dibujo d1 (4,10,"Link");
// d1.Imprimir();

// dibujos.push_back(d1);
//dibujos.push_back(link);

//list<Actualizable*> actualizables;
//actualizables.push_back(control);
//actualizables.push_back(link);

//   bool ejecucion=true;
//   while (ejecucion)
//    {
// Clico de dibujo
//       v.Actualizar(actualizables);
//       d1->Imprimir();//    }

//   delete link;
//   delete d1;

    return 0;
}

// ls -> listar
//  cd src -> change directory
//  rm -> eliminar
//  c++ -> recopilar