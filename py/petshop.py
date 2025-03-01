class PetShop:
    def __init__(self, id, nama_produk, harga_produk, stok_produk):
        self.id = id
        self.nama_produk = nama_produk
        self.harga_produk = harga_produk
        self.stok_produk = stok_produk

    def tampil(self):
        print(f"ID: {self.id}")
        print(f"Nama Produk: {self.nama_produk}")
        print(f"Harga: {self.harga_produk}")
        print(f"Stok: {self.stok_produk}")
