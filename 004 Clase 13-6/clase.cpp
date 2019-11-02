#include <iostream>
#include <stdlib.h>
///*
struct Punto
{
    double x, y;
};
void coord(const Punto &);

int main()
{
    Punto p{7, 14};
    Punto h{0, 0};

    std::cout << &p.x << '\n';       // Nos dá la dirección de memoria 'p.x'
    std::cout << &h << '\n';         // Nos dá la dirección de memoria 'h'
    std::cout << sizeof p << '\n';   // Nos dá el tamañp de memoria de 'p'
    std::cout << sizeof p.x << '\n'; // Nos dá el tamañp de memoria de 'p.x'
    std::cout << sizeof p.y << '\n'; // Nos dá el tamañp de memoria de 'p.y'
    return 0;

    coord(p);
    std::cout << "\n";
    coord(h);
}
void coord(const Punto &p)
{
    std::cout << '(' << p.x << ',' << p.y << ')';
}
//*/