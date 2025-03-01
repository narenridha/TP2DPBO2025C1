# Mengimpor kelas Petshop dari file petshop.py
from petshop import PetShop
from aksesoris import Aksesoris
from baju import Baju
# Fungsi utama program
def main():
    # List untuk menyimpan objek Petshop sebagai database sementara
    database = []

    # Menampilkan menu utama kepada pengguna
    print("Menu")
    print("0. Keluar")
    print("1. Tambah Data")
    print("2. Tampilkan Data")
    print("3. Hapus Data")
    print("4. Ubah Data")
    print("5. Cari Data")

    # Loop utama untuk menerima input dari pengguna
    while True:
        try:
            # Meminta input pilihan menu dari pengguna
            cek = int(input("Pilih menu: "))

            # Menambahkan data baru ke dalam database
            if cek == 1:
                print("Tambah Data")
                id = int(input("ID: "))
                nama = input("Nama: ")
                harga = int(input("Harga: "))
                stok = int(input("Stok: "))
                jenis = input("Jenis: ")
                bahan = input("Bahan: ")
                warna = input("Warna: ")
                untuk = input("Untuk: ")
                size = input("Size: ")
                merk = input("Merk: ")

                # Membuat objek Petshop baru dan menambahkannya ke database
                database.append(Baju(id, nama, harga, stok, jenis, bahan, warna, untuk, size, merk))
                print("Data berhasil ditambahkan!")

            # Menampilkan semua data yang tersimpan di database
            elif cek == 2:
                if not database:
                    print("Tidak ada data yang tersedia.")
                else:
                    print("Tampilkan Data")
                    for i, item in enumerate(database):
                        print(f"Data ke-{i}:")
                        item.tampil()
                        print("-----------------")

            # Menghapus data berdasarkan indeks yang diberikan oleh pengguna
            elif cek == 3:
                hapus = int(input("Masukkan indeks data yang ingin dihapus: "))

                if hapus < 0 or hapus >= len(database):
                    print("Indeks tidak valid!")
                else:
                    del database[hapus]  # Menghapus data dari database
                    print("Data berhasil dihapus dan posisi diperbarui!")

            # Mengubah data yang ada berdasarkan indeks yang diberikan oleh pengguna
            elif cek == 4:
                ubah = int(input("Masukkan indeks data yang ingin diubah: "))

                if ubah < 0 or ubah >= len(database):
                    print("Indeks tidak valid!")
                else:
                    id = int(input("ID: "))
                    nama = input("Nama: ")
                    harga = int(input("Harga: "))
                    stok = int(input("Stok: "))
                    jenis = input("Jenis: ")
                    bahan = input("Bahan: ")
                    warna = input("Warna: ")
                    untuk = input("Untuk: ")
                    size = input("Size: ")
                    merk = input("Merk: ")
                    # Mengupdate data dengan objek baru
                    database[ubah] = Baju(id, nama, harga, stok, jenis, bahan, warna, untuk, size, merk)
                    print("Data berhasil diperbarui!")

            # Mencari data berdasarkan nama
            elif cek == 5:
                nama_cari = input("Masukkan nama yang ingin dicari: ")
                found = False

                # Looping melalui database untuk mencari nama yang cocok
                for i, item in enumerate(database):
                    if item.nama_produk.lower() == nama_cari.lower():  # Pencarian case-insensitive
                        print(f"Data ditemukan pada indeks ke-{i}:")
                        item.tampil()
                        print("-----------------")
                        found = True
                        break  # Keluar dari loop jika sudah ditemukan
                
                if not found:
                    print("Data tidak ditemukan.")

            # Keluar dari program jika pengguna memilih 0
            elif cek == 0:
                print("Bubayyy.")
                break  # Menghentikan loop

            # Menangani input yang tidak valid
            else:
                print("Pilihan tidak valid, silakan coba lagi!")

        # Menangani error jika input bukan angka
        except ValueError:
            print("Input tidak valid! Harap masukkan angka.")

# Menjalankan program utama jika file dijalankan langsung
if __name__ == "__main__":
    main()
