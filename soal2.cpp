#include <iostream>
#include <string>

using namespace std;

string angkaKeTulisan(int angka) {
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan", "sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

    if (angka < 0 || angka > 100) {
        return "Angka harus antara 0 sampai 100";
    } else if (angka < 20) {
        return satuan[angka];
    } else {
        return puluhan[angka / 10] + (angka % 10 != 0 ? " " : "") + satuan[angka % 10];
    }
}

int main() {
    int angka;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    string tulisan = angkaKeTulisan(angka);
    cout << angka << " : " << tulisan << endl;

    return 0;
}