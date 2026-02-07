#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter how many numbers: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid count!";
        return 0;
    }

    double num, max;

    cout << "Enter number 1: ";
    cin >> max;  // Assume first number as maximum

    for (int i = 2; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        if (num > max) {
            max = num;  // Update maximum
        }
    }

    cout << "Largest number = " << max << endl;

    return 0;
}
