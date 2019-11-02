#include <iostream>
#include "circulo.h"
#include "lista.h"
Lista<Circulo> c;
Lista<Circulo *> c0, c1, c2, c3, c4;

void getCirculos();
void tagByCuadrante();
void showCirculo(const Lista<Circulo *> &);

// Un for con un switch y por cada switch, insert.
int main()
{
    getCirculos();
    tagByCuadrante();
    showCirculo(c0);
    showCirculo(c1);
    showCirculo(c2);
    showCirculo(c3);
    showCirculo(c4);
}

void getCirculos()
{
    Circulo unCirculo;
    while (getCirculo(unCirculo))
    {
        insert(c, lenght(c), unCirculo);
    }
}

void showCirculo(const Lista<Circulo *> &cx)
{
    for (unsigned i{0}; i < lenght(cx); ++i)
        mostrarCirculo(*getVal(cx, i));
}

void tagByCuadrante()
{
    for (unsigned i{0}; i < lenght(c); ++i)
        switch (getCuadrante(getVal(c, i)))
        {
        case 1:
            insert(c1, lenght(c1), &getVal(c, i));
            break;
        case 2:
            insert(c2, lenght(c2), &getVal(c, i));
            break;
        case 3:
            insert(c3, lenght(c3), &getVal(c, i));
            break;
        case 4:
            insert(c4, lenght(c4), &getVal(c, i));
            break;
        case 0:
            insert(c0, lenght(c0), &getVal(c, i));
            break;
        }
}