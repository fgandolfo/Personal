#include <iostream>
#include <stdlib.h>
#include <assert.h>

bool esBisiesto(unsigned int);
bool esDiv(int, int);

int main()
{
    int year = 1253;

    assert(esBisiesto(2000));
    assert(!esBisiesto(1257));
    assert(esDiv(4, 2));
    assert(!esDiv(13, 6));

    if (esBisiesto(year))
        std::cout << "Es bisiesto";
    else
        std::cout << "No es bisiesto";
}

bool esBisiesto(unsigned int y) { return (esDiv(y, 400) || (esDiv(y, 4) && !(esDiv(y, 100)))); }

bool esDiv(int y, int val) { return (y % val == 0); }