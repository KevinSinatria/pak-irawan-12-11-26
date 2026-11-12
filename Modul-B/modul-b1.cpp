#include<iostream>
#include<string>
using namespace std;

string tulis() {
    return "JTK Polban";
}

double phi() {
    return 3.14159;
}

int main() {
    float r;
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> r;
    const double luas = phi() * r * r;
    cout << "Luas lingkaran: " << luas << endl;

    const string tulisan = tulis();
    cout << tulisan << endl;
    return 0;
}