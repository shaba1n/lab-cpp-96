#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;
     std::cout << "\nBefore swapping: a = " << a << ", b = " << b << "\n";
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "After swapping:  a = " << a << ", b = " << b << "\n";
     return 0;
}