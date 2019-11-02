#include <iostream>
#include <array>
#include "lista.h"

template <typename T>
bool insert(Lista<T> &ls, unsigned &pos, T &val)
{
    if (ls.ocup == N)
        return false;
    if (pos > ls.ocup)
        return false;
    for (unsigned i = ls.ocup + 1; i > pos; i--)
        ls.var.at(i) = ls.var.at(i - 1);
    ls.var.at(pos) = val;
    ls.ocup += 1;
    return true;
}

template <typename T>
bool remove(Lista<T> &ls, unsigned &pos)
{
    if (ls.ocup == 0)
        return false;
    for (unsigned i = pos; i < ls.ocup; i++)
        ls.var.at(i) = ls.var.at(i + 1);
    ls.ocup -= 1;
    return true;
}

template <typename T>
void insertLast(Lista<T> &ls, T &val)
{
    if (ls.ocup == 0)
        ls.var.at(ls.ocup) = val;
    ls.var.at(ls.ocup + 1) = val;
    ls.ocup += 1;
}

template <typename T>
void removeLast(Lista<T> &ls)
{
    if (ls.ocup == 0)
        ls.var.at(ls.ocup) = 0;
    ls.var.at(ls.ocup) = 0;
    ls.ocup -= 1;
}

template <typename T>
T getVal(const Lista<T> &ls, unsigned &pos)
{
    return ls.var.at(pos);
}

template <typename T>
bool modVal(Lista<T> &ls, unsigned &pos, T &val)
{
    if (pos > ls.ocup)
        return false;
    ls.var.at(pos) = val;
    return true;
}

template <typename T>
void index(const Lista<T> &ls)
{
    if (ls.ocup == 0)
        return;
    for (unsigned i = 0; i < ls.ocup; i++)
        std::cout << i << ".\t" << ls.var.at(i) << "\n";
}

template <typename T>
unsigned lenght(const Lista<T> &ls)
{
    return ls.ocup;
}