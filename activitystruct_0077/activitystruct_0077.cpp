#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa{
	string nim;
	string nama;
	DetailAlamat alamat;
	string umur;
};

int main() {
	Mahasiswa mhs;
	cout << "Nomor Mahasiswa : ";
	cin >> mhs.nim;
	getline (cin, mhs.nim);
	cout << "Nama Mahasiswa : ";
	cin >> mhs.nama;
	getline(cin, mhs.nama);
	 

	cout << "Alamat Mahasiswa : "; 
	cout << "\t Nama Desa : ";
	cin >> mhs.alamat.desa;
	cout << "t Nama Kota : ";
	cin >> mhs.alamat.kota;
	

	cout << "Umur Mahasiswa : ";
	cin >> mhs.umur;

	cout << endl;
	cout << "\n NIM : " << mhs.nim;
	cout << "\n Nama : " << mhs.nama;
	cout << "\n Alamat : ";
	cout << "\n Desa : " << mhs.alamat.desa;
	cout << "\n Kota : " << mhs.alamat.kota;
	cout << "\n Umur : " << mhs.umur;

	   
}

	for (int i = 0; i < 3; i++) {
	cout << "\n NIM : "<< mhs[i].nim;
	cout << "\n Nama : " << mhs[i].nama;
	cout << "\n Alamat ";
	cout << "\n \t Desa : " << mhs[i].Alamat.desa;
	cout << "\n \t kota : " << mhs[i].Alamat.kota;
	cout << "\n Umur : " << mhs[i].umur;

	
	}