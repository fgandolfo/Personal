#include <iostream>
#include <array>
const unsigned N{5};

/*
    Grupo 3
    Obtener 5 números y devolver el promedio y los valores mayores a ese promedio.
    2019-09-18
*/
bool getNReales(std::array<double, N> &);
double getPromedio(const std::array<double, N> &);
void mostrarMayoresA(const std::array<double, N> &, double);

int main()
{
    system("@echo off");
    system("cls");

    std::array<double, N> val;

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
    auto n{0};

    for (double d; n != N && std::cin >> d; ++n)
    {
        a.at(n) = d;
    }
    if (n == N)
        return true;
    return false;
}