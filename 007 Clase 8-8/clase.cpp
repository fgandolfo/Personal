#include <iostream>

void Escribir(std::string, int &);
void EscribirElse(std::string, int &);

int main()
{
    int cont = 100;
    EscribirElse(".", cont);
}

void Escribir(std::string vap, int &cont)
{
    if (cont == 0)
        return;
    if (cont == 1)
    {
        std::cout << cont << '\n';
        return;
    }

    std::cout << cont << '\n';
    cont -= 1;
    Escribir(vap, cont);
}

void EscribirElse(std::string vap, int &cont)
{
    if (cont == 0)
    {
        vap = ".";
        cont = cont + 20;
        EscribirElse(vap, cont);
    }
    else
    {
        cont -= 1;
        std::cout << vap << '\n';
        vap = "." + vap;
        EscribirElse(vap, cont);
    }
}