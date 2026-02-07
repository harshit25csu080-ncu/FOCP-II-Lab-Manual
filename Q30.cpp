#include <iostream>
using namespace std;

int main() {
    float salary[10];
    float total = 0, average;

    cout << "Enter salaries of 10 employees:\n";

    for (int i = 0; i < 10; i++) {
        cout << "Employee " << i + 1 << ": ";
        cin >> salary[i];
        total += salary[i];   // Add each salary to total
    }

    average = total / 10;

    cout << "\nTotal Salary = " << total << endl;
    cout << "Average Salary = " << average << endl;

    return 0;
}
