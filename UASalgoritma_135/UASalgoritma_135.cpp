#include <iostream>
#include <string>
using namespace std;
//isi disini
const int MAX_MAHASISWA = 100;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;

//isi disini
void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};
//isi disini
void tampilkanSemuaMahasiswa() {
	//isi disini
	if (jumlahMahasiswa == 0) {
		cout << "Data Mahasiswa belum ditambahkan" << endl;
	}
	else {
		cout << "========Tambah Data Mahasiswa=========" << endl;
		for (int i = 0; i < jumlahMahasiswa; i++) {
			cout << "NIM : " << NIM[i] << endl;
			cout << "NAMA : " << nama[i] << endl;
			cout << "Tahun Masuk : " << tahunMasuk[i] << endl;
		}
	}
}
void algorithmacariMahasiswaByNIM() {
	//isi disini
	cout << "Cari mahasiswa berdasarkan NIM :";
	int MencariNIM;
	cin >> MencariNIM;

	bool Mahasiswaditemukan = false;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		if (NIM[i] == MencariNIM) {
			cout << "=======Mahasiswa Ditemukan======" << endl;
			cout << "NIM : " << NIM[i] << endl;
			cout << "NAMA : " << nama[i] << endl;
			cout << "Tahun Masuk : " << tahunMasuk[i] << endl;
			Mahasiswaditemukan = true;
			break;
		}
	}
	if (!jumlahMahasiswa);
	cout << "Mahasiswa Ditemukan";
}
void algorithmaSortByTahunMasuk() {

}
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case '1': 
			tambahMahasiswa();		//isi disini
			break;
		case 2:
			//isi disini
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			//isi disini
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			//isi disini
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);

		return 0;

}

// 2. algoritma linier dan algoritma sort
// 3. algoritma stack menggunakan LIFO (last in first out) 
//	algoritma queue menggunakan FIFO (first in first out)
// 4.digunakan pada saat ingin menggunakan structur data pada perogram
// 5. Keadalaman 4 

