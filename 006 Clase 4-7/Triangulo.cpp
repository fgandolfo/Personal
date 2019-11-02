#include "Triangulo.h"
#include <iostream>

double getPerimetro(const Triangulo &t)
{
    return getDist(t) + getDist(t) + getDist(t);
}

TipoDeTriangulo getTipo(const Triangulo &t)
{
    return son3DistIguales(t) ? Equilatero : son3DistDistintos(t) ? Escaleno : Isosceles;
}

bool EsEquilatero(const Triangulo &t)
{
    return son3DistIguales(t); // ó return getTipo(t) == Equilatero;
}

Triangulo ExtraerTriangulo()
{
    Triangulo t;

    t.a = ExtraerPunto();
    t.b = ExtraerPunto();
    t.c = ExtraerPunto();

    return t;
}
