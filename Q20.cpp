#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 3; i++) {          // Rows
        for (int j = 1; j <= 5; j++) {      // Columns
            cout << j << " ";
        }
        cout << endl;  // Move to next line after each row
    }

    return 0;
}
