#include <iostream>
using namespace std;

struct Node {
    int rn_NilaiUTS = 0;
    int rn_NilaiUAS = 0;
    int rn_N1 = 0;
    int rn_N2 = 0;
};

Node *rn_P, *rn_Q;

int main() {
    rn_P = new Node;
    rn_P->rn_N1 = 99;

    rn_Q = new Node;
    rn_Q->rn_N2 = 78;

    // Menampilkan isi variabel
    cout << endl;
    cout << "Isi Variabel P = " << rn_P->rn_N1 << endl;
    cout << "Isi Variabel Q = " << rn_Q->rn_N2 << endl;
    cout << endl;

    cin.get();

    cin.get();
}