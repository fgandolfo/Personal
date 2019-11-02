#include "circulo.h"
#include "lista.h"
#include <iostream>

unsigned getCuadrante(const Circulo &c)
{
    if (c.centro.x > 0 && c.centro.y > 0)
        return 1;
    else if (c.centro.x < 0 && c.centro.y > 0)
        return 2;
    else if (c.centro.x < 0 && c.centro.y < 0)
        return 3;
    else if (c.centro.x > 0 && c.centro.y < 0)
        return 4;
    else
        return 0;
}

bool getCirculo(Circulo &c)
{
    std::cout << "x: ";
    std::cin >> c.centro.x;
    if (c.centro.x == 999)
        return false;
    std::cout << "y: ";
    std::cin >> c.centro.x;
    std::cout << "Radio: ";
    std::cin >> c.radio;
    return true;
}

void MostrarCirculo(const Circulo &c)
{
    std::cout << "(" << c.centro.x << ", " << c.centro.y << ")\tRadio: " << c.radio << "\n";
}