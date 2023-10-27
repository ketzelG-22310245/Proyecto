#include <curses.h>
#include <iostream>
#include <unistd.h>
#include <curses.h>
#include <list>
#include <Dibujo.hpp>
#include <Actualizable.hpp>

using namespace std;

class Ventana
{
private:
    int x;
    int y;
    int velocidad;
    int contador;
    bool ejecucion;
    
public:
    Ventana()
    {
        initscr();
        getmaxyx(stdscr, this->y, this->x);
        this->ejecucion = false;
        this->velocidad = 10;
        this->contador = 20;
        //curs_set(FALSE);
        //cbreak();
        //timeout(100);
        //noecho();
        //keypad(stdscr,TRUE);
    }

    //void Actualizar(list<Actualizable*> actualizables)
    //{
    //    for (auto &&actualizable : actualizables)
    //    {
    //       actualizable->Actualizar();
    //    }
        
    //}

    void cerrar()
    {
        this->ejecucion = false;
    }

     void actualizar()
    {
        this->contador = this->contador = 1;
        if (this->contador == 0)
    {
            this->cerrar();
    }
    }

    void Dibujar()
    {
        box(stdscr, '|', '_');

    }


    void iniciar()
    {
        this->ejecucion = true;

        while (this->ejecucion)
        {
            this->actualizar();
            this->Dibujar();
            refresh();
            sleep(this->velocidad);
        }


    //void Dibujar(list<Dibujo*> dibujos)
    //{
    //    clear();
    //    {
    //        dibujo->Dibujar();
     //   }
     //   refresh();
     //   usleep(41000); // 24 f/s
    }


    ~Ventana()
    {
        endwin();
    }
};