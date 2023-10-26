#include <Ventana.hpp>
#include <Dibujo.hpp>
#include <Actualizable.hpp>
#include <Controlador.hpp>
#include <curses.h>
#include <unistd.h>
#include <list>
#include <Link.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana v;
    Link* link = new Link();
    Controlador* control = new Controlador();

    Dibujo* d1 = new Dibujo (3,10,"");
    Dibujo* d2 = new Dibujo (3,10,"");

    list<Dibujo*> dibujos;
    dibujos.push_back(d1);
    dibujos.push_back(d2);
    dibujos.push_back(link);

    list<Actualizable*> actualizables;
    actualizables.push_back(control);
    actualizables.push_back(link);

        bool ejecucion=true;
        while (ejecucion)
        {
            // Clico de dibujo
            v.Actualizar(actualizables);
            v.Dibujar(dibujos);
        }

    return 0;
}

// ls -> listar
//  cd src -> change directory
//  rm -> eliminar
//  c++ -> recopilar