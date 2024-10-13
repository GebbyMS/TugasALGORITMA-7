#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah elemen Array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen Array ke-" << i + 1 << ": ";
        cin >> arr[i];
    }
    int max_value = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }
    cout << "Nilai tertinggi dalam Array: " << max_value << endl;

    int angka;
    cout << "Masukkan angka yang indeksnya ingin diperiksa: ";
    cin >> angka;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == angka) {
            cout << "Angka " << angka << " ditemukan pada indeks ke-" << i << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Angka " << angka << " tidak ditemukan dalam Array." << endl;
    }

    return 0;
}
