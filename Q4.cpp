#include <iostream>
using namespace std;

int main() {
    int itemNo, qty;
    float price, amount, discount, total;

    cout << "Enter item number, quantity, unit price: ";
    cin >> itemNo >> qty >> price;

    amount = qty * price;
    discount = amount * 0.20;
    total = amount - discount;

    cout << "Total amount after 20% discount = " << total << endl;
    return 0;
}
