#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct MATAKULIAH {
        string rn_nama;
        int rn_sks;
        char rn_nHuruf;
        float rn_nAngka;
    };

    MATAKULIAH Data_MK;

    Data_MK.rn_nama = "Algoritma dan Pemrograman 2";
    Data_MK.rn_sks = 3;
    Data_MK.rn_nHuruf = 'A';
    Data_MK.rn_nAngka = 4.00;

    cout << endl;
    cout << endl;
    cout << "Mata Kuliah  = " << Data_MK.rn_nama << endl;
    cout << "Jumlah sks   = " << Data_MK.rn_sks << endl;
    cout << "Nilai        = " << Data_MK.rn_nHuruf << endl;
    cout << "Indeks       = " << Data_MK.rn_nAngka << endl;

    cin.get();
}