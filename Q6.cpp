#include <iostream>
using namespace std;

int main() {
    int n;
    float salary, bonus, net;

    cout << "Enter number of employees: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        cout << "Enter basic salary of employee " << i << ": ";
        cin >> salary;

        bonus = salary * 0.12;
        net = salary + bonus;

        cout << "Bonus: " << bonus << "  Net Salary: " << net << endl;
    }
    return 0;
}
