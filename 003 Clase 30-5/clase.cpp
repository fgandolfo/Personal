/*
    Problema: Cuantos días tiene un mes?
*/

#include <iostream>
#include <assert.h>
#include <cassert>

bool esBisiesto(unsigned int);
bool esDiv(int, int);
int getDias(int, int);

int main()
{
    int n;
    assert(31 == getDias(3, 1965));
    assert(29 == getDias(2, 2000));
    std::cin >> n;
    std::cout << getDias(n, 2001);
}

int getDias(int m, int a)
{
    return m == 2 and esBisiesto(a) ? 29 : m == 2 and !esBisiesto(a) 28 : (m == 4 or m == 6 or m == 9 or m == 11) ? 30 : 31;
}

bool esBisiesto(unsigned int y) { return (esDiv(y, 400) || (esDiv(y, 4) && !(esDiv(y, 100)))); }
bool esDiv(int y, int val) { return (y % val == 0); }
