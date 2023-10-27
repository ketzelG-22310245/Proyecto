#pragma once
#include <Dibujo.hpp>
#include <Actualizable.hpp>

class Link : public Dibujo, public Actualizable
{
private:
    /* data */
public:
    Link(/* args */) : Dibujo("Link")
    {
    }
    ~Link() {}
    void Actualizar()
    {
    }
};