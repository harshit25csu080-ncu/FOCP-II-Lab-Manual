#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, avg;

    cout << "Enter marks of 3 students: ";
    cin >> m1 >> m2 >> m3;

    avg = (m1 + m2 + m3) / 3;

    cout << "Average marks = " << avg << endl;
    return 0;
}
