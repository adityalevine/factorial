#include <iostream>
using namespace std;

int main() {
    int F = 1, BIL, I = 1;

    cout << "Masukkan bilangan: ";
    cin >> BIL;

    while (I <= BIL) {
        F = F * I;
        I = I + 1;
    }

    cout << "Faktorial dari " << BIL << " adalah: " << F << endl;
    return 0;
}
