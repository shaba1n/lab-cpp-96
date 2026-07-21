#include <iostream>
using namespace std;

int main() {
    float side;
    float perimeter;
    float area;
    
    cout << "Enter the side of square: ";
    cin >> side;
    
    perimeter = 4 * side;
    area = side * side;
    
    cout << "Perimeter of square: " << perimeter << endl;
    cout << "Area of square: " << area << endl;
    
    return 0;
}
