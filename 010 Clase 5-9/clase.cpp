#include <iostream>
#include <array>
#include <vector>

struct Producto
{
    std::string ID,
        fecha_alta,
        fecha_modif,
        desc;
    double precio{0};
    int cat{0},
        cant{0};
};

int main()
{
    std::array<Producto, 1000> stock;
    std::vector<unsigned> a{1, 5, 3};

    a.pop_back();
    std::cout << a.size();
}