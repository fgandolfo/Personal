#include <iostream>
#include <array>

struct Datos
{
    double valor{0};
    unsigned cant{0};
};

bool getDatos(unsigned &, unsigned &, unsigned &);

int main()
{
    std::array<std::array<std::array<Datos, 2>, 3>, 11> PromedioPorAnio{0};

    unsigned AnioIng;
    unsigned RegionIng;
    unsigned ProductIng;

    std::cout << "Hello World\n";

    for (double valorIng; std::cin >> AnioIng >> RegionIng >> ProductIng >> valorIng;)
    {
        if (getDatos(AnioIng, RegionIng, ProductIng))
        {
            PromedioPorAnio.at(AnioIng - 2010).at(RegionIng).at(ProductIng).valor += valorIng;
            ++PromedioPorAnio.at(AnioIng - 2010).at(RegionIng).at(ProductIng).cant;
        }
    }

    for (unsigned yy = 2010; yy < 2021; ++yy)
    {
        for (unsigned rr = 0; rr < 3; ++rr)
        {
            for (unsigned pp = 0; pp < 2; ++pp)
            {
                Datos entry = PromedioPorAnio.at(yy - 2010).at(rr).at(pp);
                if (entry.cant > 0)
                    std::cout << yy << "\tRegion: " << rr << "\tProducto: " << pp << "\tPromedio: " << entry.valor / entry.cant << "\n";
            }
        }
    }
}

bool getDatos(unsigned &aI, unsigned &rI, unsigned &pI)
{

    if (aI >= 2010 && aI <= 2020)
    {
        if (rI >= 0 && rI <= 2)
        {
            if (pI >= 0 && pI <= 1)
                return true;
        }
    }
    return false;
}