#include <iostream>
#include <cmath> 
using namespace std;


int main() {
    const double PI = 3.14159265358979323846;
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double circumference = 2 * PI * radius;
    double area = PI * std::pow(radius, 2);
    cout << "\nResults for a circle with radius " << radius << ":\n";
    cout << "Circumference: " << circumference << "\
    cout << "Area:          " << area << "\n";

    return 0;
}