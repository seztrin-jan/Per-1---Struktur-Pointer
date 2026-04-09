#include <iostream>
#include <string>
using namespace std;

	struct Rina{
		string nama;
		string alamat;
		int tahunlahir;
		int tinggi;
		string pekerjaan;
		int nomorsim;
		int masa_berlaku; };
	Rina datasim;

int main()
{
	datasim.nama = "Zahrina";
	datasim.alamat = "Grogol";
	datasim.tahunlahir = 2008;
	datasim.tinggi = 163 ;
	datasim.pekerjaan = "Mahasiswi";
	datasim.nomorsim = 232323;
	datasim.masa_berlaku = 2029 ;

	cout << "Nama : " << datasim.nama << endl; 
	cout << "Alamat : " << datasim.alamat << endl; 
	cout << "Tahun Lahir : " << datasim.tahunlahir << endl; 
	cout << "Tinggi : " << datasim.tinggi << endl; 
	cout << "Pekerjaan : " << datasim.pekerjaan << endl; 
	cout << "Nomor SIM : " << datasim.nomorsim << endl; 
	cout << "Masa Berlaku : " << datasim.masa_berlaku << endl; 

cin.get();
}

