from petshop import PetShop

class Aksesoris(PetShop):
    def __init__(self, id, nama_produk, harga_produk, stok_produk, jenis, bahan, warna):
        super().__init__(id, nama_produk, harga_produk, stok_produk)
        self.jenis = jenis
        self.bahan = bahan
        self.warna = warna

    def tampil(self):
        super().tampil()
        print(f"Jenis: {self.jenis}")
        print(f"Bahan: {self.bahan}")
        print(f"Warna: {self.warna}")
