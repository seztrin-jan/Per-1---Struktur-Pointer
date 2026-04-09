#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct pelanggan_toko {
    string rn_nama[20], rn_alamat[20], rn_kelamin[20], rn_telp[20];
    int rn_umur[31];
} rn_data;

int main() {
    int rn_jumlah, rn_i;

    cout << endl;
    cout << "INPUT DATA PELANGGAN\n";
    cout << "Jumlah pelanggan : ";
    cin >> rn_jumlah;

    for (rn_i = 1; rn_i <= rn_jumlah; rn_i++) {
        cout << endl;
        cout << "Nama Pelanggan Toko      : "; cin >> rn_data.rn_nama[rn_i];
        cout << "Alamat Pelanggan Toko    : "; cin >> rn_data.rn_alamat[rn_i];
        cout << "Umur Pelanggan Toko      : "; cin >> rn_data.rn_umur[rn_i];
        cout << "Jenis Kelamin Pelanggan [L/P] : "; cin >> rn_data.rn_kelamin[rn_i];
        cout << "No telp Pelanggan        : "; cin >> rn_data.rn_telp[rn_i];
        cout << endl;
    }

    cout << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "                Data Pelanggan Toko                     " << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "| Nama | Alamat | Umur | Kelamin | No telp |" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    for (rn_i = 1; rn_i <= rn_jumlah; rn_i++) {
        cout << setw(5) << rn_data.rn_nama[rn_i]
             << setw(10) << rn_data.rn_alamat[rn_i]
             << setw(10) << rn_data.rn_umur[rn_i]
             << setw(10) << rn_data.rn_kelamin[rn_i]
             << setw(10) << rn_data.rn_telp[rn_i];
        cout << endl;
    }

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << endl;

    cin.get();
}