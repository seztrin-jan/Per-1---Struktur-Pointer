#include <iostream>
using namespace std;

int main()
{
    int rn_n, *rn_pn, **rn_ppn;

    rn_n = 44;
    rn_pn = &rn_n;
    rn_ppn = &rn_pn;

    cout << endl;
    cout << " Isi variabel [n - *pn - *ppn] = "
         << rn_n << " - " << *rn_pn << " - " << **rn_ppn << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << endl;
    cout << " Alamat variabel [&n - &pn - &ppn] = "
         << &rn_n << " - " << &rn_pn << " - " << &rn_ppn << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << endl;
    cout << " Isi variabel dalam HEXA [n - pn - ppn] = "
         << rn_n << " - " << rn_pn << " - " << rn_ppn << endl;

    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << endl;
    cin.get();
}