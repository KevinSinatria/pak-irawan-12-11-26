#include<iostream>
#include<string>
using namespace std;

string tulis(string nama) {
    return "Hello " + nama;
}

double hitung_luas_lingkaran(float r) {
    return 3.14159 * r * r;
}

double hitung_luas_persegi_panjang(float p, float l) {
    return p * l;
}

int main() {
    string nama;
    cout << "Masukkan nama: ";
    getline(cin, nama);
    
    const string tulisan = tulis(nama);
    cout << tulisan << endl;
    cout << endl;

    cout << "Perhitungan luas lingkaran" << endl;
    float r;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;

    const double luas = hitung_luas_lingkaran(r);
    cout << "Luas lingkaran: " << luas << endl;
    cout << endl;
    
    float pjg, lbr;
    cout << "Perhitungan luas persegi panjang" << endl;
    cout << "Masukkan panjang: ";
    cin >> pjg;
    cout << "Masukkan lebar: ";
    cin >> lbr;
    
    const double luas_persegi_panjang = hitung_luas_persegi_panjang(pjg, lbr);
    cout << "Luas persegi panjang: " << luas_persegi_panjang << endl;
    return 0;
}