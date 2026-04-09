#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    int rn_i;
    char *rn_namaKu, rn_NM[6] = {'C','A','N','D','R','A'};

    cout << "Nama KU" << endl;
    cout << "~~~~~~~~" << endl;

    for(rn_i = 0; rn_i < 6; rn_i++)
    {
        rn_namaKu = &rn_NM[rn_i];
        cout << " " << *rn_namaKu << endl;
    }

    cin.get();
}