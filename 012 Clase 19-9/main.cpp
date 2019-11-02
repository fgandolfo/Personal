#include <iostream>
#include <array>
#include "lista.h"
#include <conio.h>

/*
    Tipo 'Lista'
*/

void make_Accion(char &, Lista &);
bool get_Choice(char &);


int main()
{
    system("color 1f");
    char c;
    Lista ls{0};
    for (; c != 'F';)
    {
        if (get_Choice(c))
        {
            if (c == 'F')
                break;
            make_Accion(c, ls);
        }
    }
    system("color 0f");
}

bool get_Choice(char &choice)
{
    system("@echo off");
    system("cls");

    std::cout << "Insertar\t[I]\n"
              << "Longitud\t[L]\n"
              << "Modificar\t[M]\n"
              << "Visualizar\t[V]\n"
              << "Remover\t\t[R]\n"
              << "Indice\t\t[X]\n\n";
    choice = _getch();
    std::cout << std::endl;
    if (choice == 'F')
        return false;
    if (choice != 'I' && choice != 'L' && choice != 'M' && choice != 'V' && choice != 'R' && choice != 'X')
    {
        std::cout << "No esta especificada esa accion.\n";
        system("pause");
        system("cls");
        return false;
    }
    return true;
}

void make_Accion(char &choice, Lista &ls)
{
    double val;
    unsigned pos{0}, i{0};
    switch (choice)
    {
    case 'I':
        std::cout << "Finalizar ingresos con valor = 0.\n";
        while (val != 0)
        {
            std::cout << "Valor a ingresar: ";
            std::cin >> val;
            if (!lista::insert(ls, val))
            {
                std::cout << "------------------------------\n";
                std::cout << "La lista esta completa.\n";
                system("pause");
                system("cls");
                break;
            }
        }
        system("pause");
        system("cls");
        break;

    case 'L':
        std::cout << "Longitud: " << lista::length(ls) << "\n";
        system("pause");
        system("cls");
        break;

    case 'M':
        if (ls.ocup != 0)
        {
            for (unsigned k = 0; k < ls.ocup - 1; k++)
            {
                std::cout << k << ".\t" << ls.val.at(k) << "\n";
            }
        }
        std::cout << "Que posicion desea modificar? ";
        std::cin >> pos;
        if (pos > ls.ocup)
        {
            std::cout << "------------------------------\n";
            std::cout << "Posicion vacia.\n";
            system("pause");
            system("cls");
            break;
        }
        std::cout << "Nuevo valor: ";
        std::cin >> val;
        lista::set(ls, pos, val);
        system("pause");
        system("cls");
        break;

    case 'V':
        std::cout << "Que valor desea visualizar? ";
        std::cin >> pos;
        std::cout << "------------------------------\n";
        std::cout << "Posicion: " << pos << "\tValor: " << lista::get(ls, pos) << '\n';
        std::cout << "------------------------------\n";
        system("pause");
        system("cls");
        break;

    case 'R':
        if (ls.ocup != 0)
        {
            std::cout << "------------------------------\n";
            for (unsigned j = 0; j < ls.ocup - 1; j++)
            {
                std::cout << j << ".\t" << ls.val.at(j) << "\n";
                ++i;
            }
            std::cout << "------------------------------\n";
        }
        std::cout << "Que posicion desea borrar? ";
        std::cin >> pos;
        lista::remove(ls, pos);
        system("pause");
        system("cls");
        break;
    case 'X':
        lista::index(ls);
        system("pause");
        system("cls");
        break;
    }
    i = 0;
    pos = 0;
}