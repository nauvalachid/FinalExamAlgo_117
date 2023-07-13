#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 100;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

void tambahMahasiswa{
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, jurusan[jumlahMahasiswa]);
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

void tampilkanSemuaMahasiswa(){
if (jumlahMahasiswa > 0) {
	cout << "========== DAFTAR MAHASISWA ==========" << endl;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "NIM       : " << NIM[i] << endl;
		cout << "Nama      : " << nama[i] << endl;
		cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
		cout << endl;
	}
}
else {
	cout << "Belum ada data mahasiswa yang tersimpan." << endl;
}
}

void algorithmacariMahasiswaByNIM(){
int nim;
bool found = false;
cout << "========== CARI MAHASISWA BERDASARKAN NIM ==========" << endl;
cout << "Masukkan NIM: ";
cin >> nim;
cin.ignore();
for (int i = 0; i < jumlahMahasiswa; i++) {
	if (NIM[i] == nim) {
		cout << "========== DATA MAHASISWA ==========" << endl;
		cout << "NIM       : " << NIM[i] << endl;
		cout << "Nama      : " << nama[i] << endl;
		cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
		found = true;
		break;
	}
}
if (!found) {
	cout << "Mahasiswa dengan NIM " << nim << " tidak ditemukan." << endl;
}
}

void algorithmSortByTahunMasuk() {
	for (int i = 0; i < jumlahMahasiswa - 1; i++) {
		for (int j = 0; j < jumlahMahasiswa - i - 1; j++) {
			if (tahunMasuk[j] > tahunMasuk[j + 1]) {
				swap(NIM[j], NIM[j + 1]);
				swap(nama[j], nama[j + 1]);
				swap(tahunMasuk[j], tahunMasuk[j + 1]);
			}
		}
	}
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
		case 1:
			//isi disini
			break;
		case 2:
			//isi disini
			break;
		case 3:
			//isi disini
			break;
		case 4:
			//isi disini
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