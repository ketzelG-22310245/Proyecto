#include <Ventana.hpp>
#include <Dibujo.hpp>
#include <curses.h>
#include <unistd.h>

using namespace std;

int main(int argc, char const *argv[])
{
    Ventana v;
    Dibujo d1(1, 1, "Link");
    Dibujo d2(180, 1, "Escenario");
    Dibujo d3(10, 20, "Arbusto");
    Dibujo d4(35, 5, "Arbusto");
    Dibujo d5(15, 30, "Arbusto");
    Dibujo d6(100, 20, "Arbusto");
    Dibujo d7(95, 5, "Arbusto");
    Dibujo d8(80, 30, "Arbusto");
    bool ejecucion = true;
    while (ejecucion)
    {
        // ciclo de actualizacion
        v.Actualizar();
        int input = getch();
        switch (input)
        {
        case 'q':
            ejecucion = false;
            break;
        case 'd':
            d1.AvanzarX(1);
            break;
        case 'a':
            d1.RetrocederX(1);
            break;
        case 'w':
            d1.RetrocederY(1); // Mueve hacia arriba en Y
            break;
        case 's':
            d1.AvanzarY(1); // Mueve hacia abajo en Y
            break;
        }

        // ciclo de dibujo
        clear();
        d3.Dibujar();
        d4.Dibujar();
        d5.Dibujar();
        d6.Dibujar();
        d7.Dibujar();
        d8.Dibujar();
        d1.Dibujar();
        d2.Dibujar();

        refresh();
        usleep(41000);
    }

    // v.iniciar();

    return 0;
}

// ls -> listar
//  cd src -> change directory
//  rm -> eliminar
//  c++ -> recopilar