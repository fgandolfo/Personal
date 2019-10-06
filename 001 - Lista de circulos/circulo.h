#ifndef _CIRCULO_
#define _CIRCULO_

struct Punto
{
    double x, y;
};

struct Circulo
{
    Punto centro;
    double radio;
};

unsigned getCuadrante(const Circulo &);
bool getCirculo(Circulo &);
void mostrarCirculo(const Circulo &);
#endif