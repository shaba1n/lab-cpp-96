#include <iostream>
using namespace std;

int main() {
    int a, b, choice;

    cout << "Enter two 2-digit numbers:" << endl;
    cout << "First number: ";
    cin >> a;
    cout << "Second number: ";
    cin >> b;

    cout << "\nMenu:" << endl;
    cout << "1. Subtraction" << endl;
    cout << "2. Multiplication" << endl;
    cout << "3. Division" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result of subtraction = " << a - b << endl;
            break;
        case 2:
            cout << "Result of multiplication = " << a * b << endl;
            break;
        case 3:
            cout << "Result of division = " << a / b << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
