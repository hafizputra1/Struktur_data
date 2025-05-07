#include <iostream>
using namespace std;

float tambah(float a, float b) {
    return a + b;
}

float kurang(float a, float b) {
    return a - b;
}

float kali(float a, float b) {
    return a * b;
}

float bagi(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Pembagian dengan nol!" << endl;
        return 0;
    }
}

int main() {
    float x, y;
    cout << "Masukkan dua angka: ";
    cin >> x >> y;

    cout << "Penjumlahan: " << tambah(x, y) << endl;
    cout << "Pengurangan: " << kurang(x, y) << endl;
    cout << "Perkalian: " << kali(x, y) << endl;
    cout << "Pembagian: " << bagi(x, y) << endl;

    return 0;
}