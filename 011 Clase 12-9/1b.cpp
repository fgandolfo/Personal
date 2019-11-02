#include <iostream>
#include <array>
const unsigned N{5};

struct Lista
{
    auto val{0.0}, size{0};
};

bool getNReales(std::array<double, N> &);
double getPromedio(const std::array<double, N> &);
void mostrarMayoresA(const std::array<double, N> &, double);

int main()
{
    system("@echo off");
    system("cls");

    std::array<double, N> val; // Le agregamos una "ocupación" para poder manejar el tamaño del arreglo.
                               // Se introduce el tipo de dato 'Lista'

    if (!getNReales(val))
    {
        std::cout << "No se obtuvieron valores suficientes.";
        return 1;
        system("@echo on");
    }

    std::cout << "Valores mayores a: " << getPromedio(val) << '\n';
    mostrarMayoresA(val, getPromedio(val));

    system("@echo on");
}

void mostrarMayoresA(const std::array<double, N> &a, double valor)
{
    for (auto d : a)
    {
        if (d > valor)
            std::cout << d << '\n';
    }
}

double getPromedio(const std::array<double, N> &a)
{
    auto suma{0.0};

    for (auto d : a)
        suma += d;

    return suma / N;
}

bool getNReales(std::array<double, N> &a)
{
    auto n{1};

    for (double d; std::cin >> d; ++n)
    {
        if (n == N)
            return true;
        a.at(n) = d;
    }
    return false;
}