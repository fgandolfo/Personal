s#include <iostream>

void foo();

int main()
{
    foo();
}

// Solicitar memoria desde el Heap con "new".
void foo()
{
    int *pi{new int{42}}; // new retorna la dirección en memoria del int
                          // pi = "puntero a int"
                          // Acá no necesitamos poner el "&" para obtener la
                          // dirección de memoria para el puntero porque ya nos lo retorna el "new".
    std::cout << *pi << "\n";
    *pi = 21;
    delete pi;        // Acá destruimos la reserva de memoria generada en el Heap para pi.
                      // Si no hacemos esto queda el valor 42 en el Heap y una vez terminado foo ya no se puede acceder,
                      // tenemos un "memory leak".
    std::cout << *pi; // Ya no se va a mostrar en pantalla el 21 porque eliminamos la reserva de memoria del Heap
                      // (ver los resutlados del ejecutable).
}