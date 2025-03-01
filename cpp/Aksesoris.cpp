#include <iostream>
#include <string>

using namespace std;

class Aksesoris : public Petshop {
protected:
    string jenis;
    string bahan;
    string warna;

public:
    Aksesoris(int id = 0, string nama_produk = "", int harga_produk = 0, int stok_produk = 0,
              string jenis = "", string bahan = "", string warna = "") 
        : Petshop(id, nama_produk, harga_produk, stok_produk), jenis(jenis), bahan(bahan), warna(warna) {}

    void setAksesoris(int id, string nama_produk, int harga_produk, int stok_produk, string jenis, string bahan, string warna) {
        Petshop::setId(id);
        Petshop::setNamaProduk(nama_produk);
        Petshop::setHargaProduk(harga_produk);
        Petshop::setStokProduk(stok_produk);
        this->jenis = jenis;
        this->bahan = bahan;
        this->warna = warna;
    }

    void setJenis(string jenis) {
        this->jenis = jenis;
    }

    void setBahan(string bahan) {
        this->bahan = bahan;
    }

    void setWarna(string warna) {
        this->warna = warna;
    }

    string getJenis() {
        return jenis;
    }

    string getBahan() {
        return bahan;
    }

    string getWarna() {
        return warna;
    }

    void tampil() override {
        Petshop::tampil();
        cout << "Jenis: " << jenis << endl;
        cout << "Bahan: " << bahan << endl;
        cout << "Warna: " << warna << endl;
    }

    virtual ~Aksesoris() {}
};
