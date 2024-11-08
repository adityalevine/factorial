#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Masukkan bilangan: ";
    cin >> num;

    bool isKelipatan2 = (num % 2 == 0);
    bool isKelipatan3 = (num % 3 == 0);
    bool isKelipatan5 = (num % 5 == 0);
    bool isKelipatan7 = (num % 7 == 0);

    int count = isKelipatan2 + isKelipatan3 + isKelipatan5 + isKelipatan7;

    cout << num << " adalah kelipatan ";
    if (count == 0) {
        cout << "bukan kelipatan keempatnya";
    } else {
        bool first = true;
        if (isKelipatan2) {
            cout << "2";
            first = false;
        }
        if (isKelipatan3) {
            if (!first && count == 2) cout << " dan ";
            else if (!first) cout << ", ";
            cout << "3";
            first = false;
        }
        if (isKelipatan5) {
            if (!first && count == 2) cout << " dan ";
            else if (!first) cout << ", ";
            cout << "5";
            first = false;
        }
        if (isKelipatan7) {
            if (!first && count == 2) cout << " dan ";
            else if (!first) cout << ", ";
            cout << "7";
        }
    }

    cout << endl;
    return 0;
}
