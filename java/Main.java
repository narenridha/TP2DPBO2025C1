import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); // Membuat objek Scanner untuk input pengguna
        ArrayList<Baju> database = new ArrayList<>(); // ArrayList untuk menyimpan objek Petshop
        int cek; // Variabel untuk menyimpan pilihan menu

        // Menampilkan menu utama
        System.out.println("Menu");
        System.out.println("0. Keluar");
        System.out.println("1. Tambah Data");
        System.out.println("2. Tampilkan Data");
        System.out.println("3. Hapus Data");
        System.out.println("4. Ubah Data");
        System.out.println("5. Cari Data"); // Fitur pencarian

        do {
            cek = sc.nextInt(); // Membaca pilihan menu dari pengguna

            if (cek == 1) {
                // Menambahkan data ke database
                System.out.println("Tambah Data");
                System.out.print("ID: ");
                int id = sc.nextInt();
                System.out.print("Nama: ");
                String nama = sc.next();
                System.out.print("Harga: ");
                int harga = sc.nextInt();
                System.out.print("Stok: ");
                int stok = sc.nextInt();
                System.out.print("Jenis: ");
                String jenis = sc.next();
                System.out.print("Bahan: ");
                String bahan = sc.next();
                System.out.print("Warna: ");
                String warna = sc.next();
                System.out.print("Untuk: ");
                String untuk = sc.next();
                System.out.print("Size: ");
                String size = sc.next();
                System.out.print("Merk: ");
                String merk = sc.next();
                
                // Menambahkan data ke dalam ArrayList
                database.add(new Baju(id, nama, harga, stok, jenis, bahan, warna, untuk, size, merk));
                System.out.println("Data berhasil ditambahkan!");

            } else if (cek == 2) {
                // Menampilkan semua data yang ada dalam database
                if (database.isEmpty()) {
                    System.out.println("Tidak ada data yang tersedia.");
                } else {
                    System.out.println("Tampilkan Data");
                    for (int i = 0; i < database.size(); i++) {
                        System.out.println("Data ke-" + i + ":");
                        database.get(i).tampil(); // Memanggil method tampil() dari objek Petshop
                        System.out.println("-----------------");
                    }
                }

            } else if (cek == 3) {
                // Menghapus data berdasarkan indeks
                System.out.print("Masukkan indeks data yang ingin dihapus: ");
                int hapus = sc.nextInt();

                if (hapus < 0 || hapus >= database.size()) {
                    System.out.println("Indeks tidak valid!");
                } else {
                    database.remove(hapus); // Menghapus elemen dari ArrayList
                    System.out.println("Data berhasil dihapus dan posisi diperbarui!");
                }

            } else if (cek == 4) {
                // Mengubah data berdasarkan indeks
                System.out.print("Masukkan indeks data yang ingin diubah: ");
                int ubah = sc.nextInt();

                if (ubah < 0 || ubah >= database.size()) {
                    System.out.println("Indeks tidak valid!");
                } else {
                    System.out.println("Ubah Data");
                    System.out.print("ID: ");
                    int id = sc.nextInt();
                    System.out.print("Nama: ");
                    String nama = sc.next();
                    System.out.print("Harga: ");
                    int harga = sc.nextInt();
                    System.out.print("Stok: ");
                    int stok = sc.nextInt();
                    System.out.print("Jenis: ");
                    String jenis = sc.next();
                    System.out.print("Bahan: ");
                    String bahan = sc.next();
                    System.out.print("Warna: ");
                    String warna = sc.next();
                    System.out.print("Untuk: ");
                    String untuk = sc.next();
                    System.out.print("Size: ");
                    String size = sc.next();
                    System.out.print("Merk: ");
                    String merk = sc.next();
                    
                    // Memanggil method setData untuk memperbarui nilai pada objek tertentu
                    database.get(ubah).setDataBaju(id, nama, harga, stok, jenis, bahan, warna, untuk, size, merk);
                    System.out.println("Data berhasil diperbarui!");
                }

            } else if(cek == 5){
                // Mencari data berdasarkan nama hewan peliharaan
                System.out.print("Masukkan nama yang ingin dicari: ");
                String cariNama = sc.next();
                boolean found = false;

                // Melakukan pencarian dalam ArrayList
                for (int i = 0; i < database.size(); i++) {
                    if (database.get(i).getNamaProduk().equalsIgnoreCase(cariNama)) {
                        System.out.println("Data ditemukan pada indeks ke-" + i + ":");
                        database.get(i).tampil(); // Menampilkan data yang ditemukan
                        found = true;
                        break; // Menghentikan loop setelah menemukan data pertama
                    }
                }

                if (!found) {
                    System.out.println("Data dengan nama " + cariNama + " tidak ditemukan.");
                }
            } else if (cek == 0) {
                // Keluar dari program
                System.out.println("Bubayyy.");
            } else {
                // Pilihan tidak valid
                System.out.println("Pilihan tidak valid, silakan coba lagi!");
            }

        } while (cek != 0); // Program akan terus berjalan hingga pengguna memilih opsi 0 (Keluar)

        sc.close(); // Menutup scanner untuk mencegah kebocoran memori
    }
}
