#pragma once
#include <curses.h>
#include <Dibujo.hpp>

class Marco : public Dibujo
{
private:
    /* data */
public:
    Marco(/* args */) {}
    ~Marco() {}
    void Dibujar(){
        box(stdscr, '#', '#');
    }
};