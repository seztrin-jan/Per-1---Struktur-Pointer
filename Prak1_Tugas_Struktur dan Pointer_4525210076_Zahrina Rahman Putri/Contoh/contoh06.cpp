#include <iostream>
using namespace std;

 int main()
 {
	int *rn_pn;
	rn_pn = new int;
	*rn_pn = 44;
	
	cout << endl;
	cout << "Isi Variabel = " << *rn_pn << endl;
	cout << endl;
 
	cin.get();
 }