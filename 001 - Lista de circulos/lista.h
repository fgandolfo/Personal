#ifndef _LISTA_
#define _LISTA_
#include <iostream>
#include <array>
const unsigned N{100};

template <typename T>
struct Lista
{
    std::array<T, N> var;
    unsigned ocup{0};
};

template <typename T>
unsigned lenght(const Lista<T> &);
template <typename T>
void removeLast(Lista<T> &);
template <typename T>
bool remove(Lista<T> &, unsigned &);
template <typename T>
void index(const Lista<T> &);
template <typename T>
T getVal(const Lista<T> &, unsigned &);
template <typename T>
bool insert(Lista<T> &, unsigned, T);
template <typename T>
void insertLast(Lista<T> &, T &);
template <typename T>
bool modVal(Lista<T> &, unsigned &, T &);

//#include "lista.cpp"

#endif