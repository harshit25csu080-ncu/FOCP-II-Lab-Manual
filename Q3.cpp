#include <iostream>
using namespace std;

int main() {
    float temp;
    int choice;

    cout << "1. Fahrenheit to Celsius\n";
    cout << "2. Celsius to Fahrenheit\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temp;
        cout << "Celsius = " << (temp - 32) * 5 / 9 << endl;
    } else {
        cout << "Enter temperature in Celsius: ";
        cin >> temp;
        cout << "Fahrenheit = " << (temp * 9 / 5) + 32 << endl;
    }
    return 0;
}
