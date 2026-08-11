#include <iostream>
using namespace std;
int main() {
    int a, b, temp;
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;
    std::cout << "\nBefore swapping: a = " << a << ", b = " << b << "\n";
    temp = a; '
    a = b;   
    b = temp; 
    cout << "After swapping:  a = " << a << ", b = " << b << "\n";
    return 0;
}