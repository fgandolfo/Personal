#include <iostream>
#include <array>

int main()
{
    std::array<unsigned, 11> n{0};
    std::array<double, 11> s{0};
    double x;
    unsigned a;

    for (; std::cin >> x >> a; ++n.at(a - 2010))
        s.at(a - 2010) += x;
    for (unsigned i = 2010; i < 2021; ++i)
        std::cout << s.at(i - 2010) / n.at(i - 2010);
}