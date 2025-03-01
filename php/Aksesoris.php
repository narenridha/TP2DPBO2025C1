<?php
require_once "Petshop.php";

class Aksesoris extends Petshop {
    protected $jenis;
    protected $bahan;
    protected $warna;

    public function __construct($id, $nama_produk, $harga_produk, $stok_produk, $foto_produk, $jenis, $bahan, $warna) {
        parent::__construct($id, $nama_produk, $harga_produk, $stok_produk, $foto_produk);
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }

    public function tampil() {
        parent::tampil();
        echo "Jenis: {$this->jenis}<br>";
        echo "Bahan: {$this->bahan}<br>";
        echo "Warna: {$this->warna}<br>";
    }
}
?>
