#include <iostream>
#include <assert.h>

double Celsius(double);
bool AreNear(double, double, double = 0.001);

int main()
{
    double Farenheit,
        x,
        y,
        n;

    assert(0 == Celsius(32));

    std::cout << "Temperatura en farenheit: ";
    std::cin >> Farenheit;
    std::cout << "Temperatura en celsius: " << Celsius(Farenheit) << "\n";
    AreNear ? std::cout << "Sí" : std::cout << "No";
}

double Celsius(double f) { return (5.0 / 9.0) * (f - 32); }
bool AreNear(double x, double y, double n) { return ((x - y) / x) <= n ? true : false; }
