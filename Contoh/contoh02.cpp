#include <iostream>
#include <string>
using namespace std;

struct Koordinat {
    int rn_X;
    int rn_Y;
};

void Tampil_Posisi(Koordinat Posisi);

int main() {
    Koordinat Posisi;

    Posisi.rn_X = 56;
    Posisi.rn_Y = 53;

    cout << endl;
    Tampil_Posisi(Posisi);

    cin.get();
}

void Tampil_Posisi(Koordinat Posisi) {
    cout << "Posisi Ordinat X adalah " << Posisi.rn_X << endl;
    cout << "Posisi Ordinat Y adalah " << Posisi.rn_Y << endl;
}