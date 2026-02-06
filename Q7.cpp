#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;

    cout << "Enter scores of 3 players: ";
    cin >> s1 >> s2 >> s3;

    if (s1 >= s2 && s1 >= s3)
        cout << "Player 1 is ahead";
    else if (s2 >= s1 && s2 >= s3)
        cout << "Player 2 is ahead";
    else
        cout << "Player 3 is ahead";

    return 0;
}
