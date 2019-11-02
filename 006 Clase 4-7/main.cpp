/*
    Construir un triángulo y dar su tipo
    Facundo Gandolfo
    4/7/2019
 */
#include <iostream>
#include "Triangulo.h"

int main()
{
    Triangulo t;

    t = ExtraerTriangulo();

    std::cout << "Perimetro: " << getPerimetro(t);
    std::cout << "Es equilatero?: " << esEquilatero(t);
    std::cout << "Tipo de triangulo: " << getTipo(t);
}