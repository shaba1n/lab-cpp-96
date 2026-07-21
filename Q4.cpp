#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double r;
    if(!(std::cin >> r)) return 0;
    const double pi = acos(-1.0);
    double area = pi * r * r;
    double circumference = 2 * pi * r;
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "Area: " << area << "\n";
    std::cout << "Circumference: " << circumference << "\n";
    return 0;
}