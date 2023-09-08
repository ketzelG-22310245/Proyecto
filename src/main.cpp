#include <iostream>
#include <Mascota.hpp>

int main(int argc, char const *argv[])
{
    std::cout << "Juego de mascotas" << std::endl;

    Mascota m1("Spike");

    m1.jugar();
    m1.jugar();
    m1.jugar();

    std::cout
        << m1.DecirNombre() << " tiene "
        << m1.DecirHambre() << " de hambre." << std::endl;

    m1.comer(5);

    return 0;
}

// ls -> listar
//  cd src -> change directory
//  rm -> eliminar
//  c++ -> recopilar