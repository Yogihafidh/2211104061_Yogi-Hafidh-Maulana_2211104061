#include <iostream>

using namespace std;

int main() {
    float bilangan1, bilangan2;
    float hasil_tambah, hasil_kurang, hasil_kali, hasil_bagi;

    // Meminta input dari pengguna
    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;

    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    // Melakukan operasi aritmatika
    hasil_tambah = bilangan1 + bilangan2;
    hasil_kurang = bilangan1 - bilangan2;
    hasil_kali = bilangan1 * bilangan2;
    hasil_bagi = bilangan1 / bilangan2;

    // Menampilkan hasil
    cout << "Hasil penjumlahan: " << hasil_tambah << endl;
    cout << "Hasil pengurangan: " << hasil_kurang << endl;
    cout << "Hasil perkalian: " << hasil_kali << endl;
    cout << "Hasil pembagian: " << hasil_bagi << endl;

    return 0;
}
