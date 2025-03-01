<?php
class Petshop {
    protected $id;
    protected $nama_produk;
    protected $harga_produk;
    protected $stok_produk;
    protected $foto_produk;

    public function __construct($id, $nama_produk, $harga_produk, $stok_produk, $foto_produk) {
        $this->id = $id;
        $this->nama_produk = $nama_produk;
        $this->harga_produk = $harga_produk;
        $this->stok_produk = $stok_produk;
        $this->foto_produk = $foto_produk;
    }

    public function tampil() {
        echo "ID: {$this->id}<br>";
        echo "Nama Produk: {$this->nama_produk}<br>";
        echo "Harga: Rp{$this->harga_produk}<br>";
        echo "Stok: {$this->stok_produk}<br>";
        echo "Foto Produk: <img src='{$this->foto_produk}' width='100'><br>";
    }
}
?>
