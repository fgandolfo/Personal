#include "Punto.h"

struct Triangulo
{
    Punto a, b, c;
};

enum struct TipoDeTriangulo
{
    Equilatero,
    Escaleno,
    Isosceles
};

Triangulo ExtraerTriangulo();
TipoDeTriangulo getTipo(const Triangulo &);
double getPerimetro(const Triangulo &);
bool esEquilatero(const Triangulo &);