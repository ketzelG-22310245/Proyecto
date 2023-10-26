#pragma once
#include <string>

class Enemigo
{
public:
    int Mover_izquierda();
    int Mover_derecha();
    int Mover_arriba();
    int Mover_abajo();
    int Atacar();

    ~Enemigo() {}
};