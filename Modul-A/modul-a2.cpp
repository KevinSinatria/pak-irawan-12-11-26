#include<iostream>
using namespace std;

void tulis(int n) {
    int i = 1;
    while (i <= n) {
        cout << '-';
        i = i + 1;
    }
}

int main() {
    int jml_k;
    cout << "Masukkan jumlah karakter: ";
    cin >> jml_k;
    tulis(jml_k);
    return 0;
}