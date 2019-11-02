#include <iostream>

int main()
{
    int i{42};     // En memoria, tenemos un bloque de memoria que tiene el valor 42.
                   // El operador & nos devuelve la dirección de memoria de una variable ("Address Of")
    int *pi{&i};   // Este tipo de dato es el de 'puntero a int' declcarado.
    int **pj{&pi}; // Variable que apunta a un puntero pi.

    std::cout << *pi;  // Nos muestra 42.
    std::cout << **pj; // Nos muestra 42.
    std::cout << *pj;  // Nos muestra la dirección de i, o sea el valor de pi.
}