/*
    Necesitamos averiguar la superficie de un
    círculo
    Es necesario aplicar estructuras
 */

#include <iostream>
const double pi = 3.14;

struct Circulo
{
    double cx, cy, r;
};

struct Coordenadas
{
    double x, y;
};

double getSupCirculo(Circulo &s);
bool contienePunto(Coordenadas coord, Circulo cir);

int main()
{
    Circulo cir;
    Coordenadas coord;

    std::cout << "\nCentro del circulo: ";
    std::cout << "x = ";
    std::cin >> cir.cx;
    std::cout << "Centro del circulo: ";
    std::cout << "y = ";
    std::cin >> cir.cy;
    std::cout << "Ingrese su radio: ";
    std::cout << "r = ";
    std::cin >> cir.r;
    std::cout << "-------------------------\n";
    std::cout << "Superficie = " << getSupCirculo(cir);
    std::cout << "\n-------------------------\n";
    std::cout << "\nIngresar una coordenada y verificar si esta contenido dentro del circulo: ";
    std::cout << "Coordenada X = ";
    std::cin >> coord.x;
    std::cout << "Coordenada Y = ";
    std::cin >> coord.y;
    contienePunto(coord, cir) ? std::cout << "El punto esta contenido.\n" : std::cout << "El punto no esta contenido.\n";
}

double getSupCirculo(Circulo &s)
{
    return pi * s.r * s.r;
}

bool contienePunto(Coordenadas coord, Circulo cir)
{
    return (coord.x - (cir.cx + cir.r) <= 0) and (coord.y - (cir.cy + cir.r) <= 0) ? 1 : 0;
};
