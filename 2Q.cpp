#include <iostream>
using namespace std;

int main() {
    double length, width;
    if(!(cin >> length >> width)) return 0;

    double area = length * width;
    double perimeter = 2 * (length + width);

    cout << area << " " << perimeter << "\n";
    return 0;
}
