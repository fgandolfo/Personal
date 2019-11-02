#include <iostream>
#include <array>
#include <string>
/*
    Grupo 3
    Trabajo: Cursos(Código, Aula, Estudiantes)
    29-08-2019
*/

struct Curso
{
    std::string codigo, aula;
    std::array<std::string, 50> estudiantes{"N/A"};
};

int main()
{
    std::string IngresoEstud;
    unsigned cont{0};
    Curso c;

    c.codigo = "K1051";
    c.aula = "240";

    std::cout << "Nombre: ";
    for (; getline(std::cin, IngresoEstud); cont++)
    {
        if (IngresoEstud == "..")
            break;
        else
            c.estudiantes.at(cont) = IngresoEstud;
    }

    for (unsigned i = 0; i <= 11; ++i)
        if (c.estudiantes.at(i).empty())
            ;
        else
            std::cout << "\tCurso: " << c.codigo << "\tAula: " << c.aula << "\tAlumno: " << c.estudiantes.at(i) << "\n";
}
