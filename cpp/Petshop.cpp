#include <iostream>
#include <string>

using namespace std;

class Petshop {
protected:
    int id;
    string nama_produk;
    int harga_produk;
    int stok_produk;

public:
    Petshop(int id = 0, string nama_produk = "", int harga_produk = 0, int stok_produk = 0, string foto_produk = "") 
        : id(id), nama_produk(nama_produk), harga_produk(harga_produk), stok_produk(stok_produk) {}


    void setId(int id) {
        this->id = id;
    }
    
    void setNamaProduk(string nama_produk) {
        this->nama_produk = nama_produk;
    }

    void setHargaProduk(int harga_produk) {
        this->harga_produk = harga_produk;
    }

    void setStokProduk(int stok_produk) {
        this->stok_produk = stok_produk;
    }

    int getId() {
        return id;
    }

    string getNamaProduk() {
        return nama_produk;
    }

    int getHargaProduk() {
        return harga_produk;
    }

    int getStokProduk() {
        return stok_produk;
    }

    virtual void tampil() {
        cout << "ID: " << id << endl;
        cout << "Nama Produk: " << nama_produk << endl;
        cout << "Harga: " << harga_produk << endl;
        cout << "Stok: " << stok_produk << endl;
    }

    virtual ~Petshop() {}
};