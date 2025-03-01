#include <iostream>
#include "Petshop.cpp"
#include "Aksesoris.cpp"
#include "Baju.cpp"

using namespace std;

int main() {
    int cek = 0, database = 0;
    Baju* objekBaju = new Baju[50];  // Maksimal 50 data

    do {
        cout << "\n=== MENU PETSHOP (baju hewan) ===" << endl;
        cout << "0. Keluar" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Tampilkan Data" << endl;
        cout << "3. Hapus Data" << endl;
        cout << "4. Ubah Data" << endl;
        cout << "5. Cari Data (Berdasarkan Nama)" << endl;
        cout << "Pilih menu: ";
        cin >> cek;
        cin.ignore();

        if (cek == 1) {  
            // Tambah Data
            if (database >= 50) {
                cout << "Database penuh! Tidak bisa menambah data lagi." << endl;
                continue;
            }

            int id, harga, stok;
            string jenis, bahan, warna;
            string nama, untuk, size, merk;

            cout << "ID: ";
            cin >> id;
            cin.ignore();
            cout << "Nama: ";
            getline(cin, nama);
            cout << "Harga: ";
            cin >> harga;
            cout << "Stok: ";
            cin >> stok;
            cin.ignore();
            cout << "jenis: ";
            getline(cin, jenis);
            cout << "Bahan: ";  
            getline(cin, bahan);
            cout << "Warna: ";
            getline(cin, warna);
            cout << "Untuk (hewan apa): ";
            getline(cin, untuk);
            cout << "Size: ";
            getline(cin, size);
            cout << "Merk: ";
            getline(cin, merk);

            objekBaju[database] = Baju(id, nama, harga, stok, jenis, bahan, warna, untuk, size, merk);
            database++;
            cout << "=== Data berhasil ditambahkan! ===\n";

        } else if (cek == 2) {  
            // Tampilkan Data
            cout << "\n=== Data Baju ===" << endl;
            if (database == 0) {
                cout << "=== Tidak ada data yang tersedia. ===" << endl;
            } else {
                for (int i = 0; i < database; i++) {
                    cout << "- Data ke-" << i + 1 << ":" << endl;
                    objekBaju[i].tampil();
                    cout << endl;
                }
            }

        } else if (cek == 3) {  
            // Hapus Data
            cout << "\nMasukkan indeks data yang ingin dihapus (1 - " << database << "): ";
            int hapus;
            cin >> hapus;
            hapus--;

            if (hapus < 0 || hapus >= database) {
                cout << "=== Indeks tidak valid! ===" << endl;
            } else {
                for (int i = hapus; i < database - 1; i++) {
                    objekBaju[i] = objekBaju[i + 1];
                }
                database--;
                cout << "=== Data berhasil dihapus! ===" << endl;
            }

        } else if (cek == 4) {  
            // Ubah Data
            cout << "\nMasukkan indeks data yang ingin diubah (1 - " << database << "): ";
            int ubah;
            cin >> ubah;
            ubah--;

            if (ubah < 0 || ubah >= database) {
                cout << "=== Indeks tidak valid! ===" << endl;
            } else {
                int id, harga, stok;
                string jenis, bahan, warna;
                string nama, untuk, size, merk;

                cout << "ID baru: ";
                cin >> id;
                cin.ignore();
                cout << "Nama baru: ";
                getline(cin, nama);
                cout << "Harga baru: ";
                cin >> harga;
                cout << "Stok baru: ";
                cin >> stok;
                cin.ignore();
                cout << "Jenis baru: ";
                getline(cin, jenis);
                cout << "Bahan baru: ";
                getline(cin, bahan);
                cout << "Warna baru: ";
                getline(cin, warna);
                cout << "Untuk baru: ";
                getline(cin, untuk);
                cout << "Size baru: ";
                getline(cin, size);
                cout << "Merk baru: ";
                getline(cin, merk);

                objekBaju[ubah].setBaju(id, nama, harga, stok, jenis, bahan, warna, untuk, size, merk);
                cout << "=== Data berhasil diperbarui! ===" << endl;
            }

        } else if (cek == 5) {  
            // Cari Data Berdasarkan Nama
            cout << "\nMasukkan nama baju yang dicari: ";
            string cari;
            cin.ignore();
            getline(cin, cari);

            bool ditemukan = false;
            for (int i = 0; i < database; i++) {
                if (objekBaju[i].getNamaProduk() == cari) {
                    cout << "🔍 Data ditemukan:\n";
                    objekBaju[i].tampil();
                    ditemukan = true;
                    break;
                }
            }
            if (!ditemukan) {
                cout << "=== Data tidak ditemukan. ===" << endl;
            }

        } else if (cek == 0) {  
            cout << "=== Bubayyyy.... ===" << endl;
        } else {
            cout << "=== Pilihan tidak valid, silakan coba lagi! ===" << endl;
        }

    } while (cek != 0);

    delete[] objekBaju;
    return 0;
}
