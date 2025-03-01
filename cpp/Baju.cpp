#include <iostream>
#include <string>

using namespace std;

class Baju : public Aksesoris {
private:
    string untuk;
    string size;
    string merk;

public:
    Baju(int id = 0, string nama_produk = "", int harga_produk = 0, int stok_produk = 0,
         string jenis = "", string bahan = "", string warna = "", string untuk = "", string size = "", string merk = "")
        : Aksesoris(id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna), 
          untuk(untuk), size(size), merk(merk) {}

    void setBaju(int id, string nama_produk, int harga_produk, int stok_produk, string jenis, string bahan, string warna,string untuk_, string size_, string merk_) {
        Petshop::setId(id);
        Petshop::setNamaProduk(nama_produk);
        Petshop::setHargaProduk(harga_produk);
        Petshop::setStokProduk(stok_produk);
        Aksesoris::setJenis(jenis);
        Aksesoris::setBahan(bahan);
        Aksesoris::setWarna(warna);
        this->untuk = untuk_;
        this->size = size_;
        this->merk = merk_;
    }

    void setUntuk(string untuk) {
        this->untuk = untuk;
    }

    void setSize(string size) {
        this->size = size;
    }

    void setMerk(string merk) {
        this->merk = merk;
    }

    string getUntuk() {
        return untuk;
    }

    string getSize() {
        return size;
    }

    string getMerk() {
        return merk;
    }

    void tampil() override {
        Aksesoris::tampil();
        cout << "Untuk: " << untuk << endl;
        cout << "Size: " << size << endl;
        cout << "Merk: " << merk << endl;
    }

    ~Baju() {}
};