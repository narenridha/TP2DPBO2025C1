<?php
require_once "Aksesoris.php";

class Baju extends Aksesoris {
    private $untuk;
    private $size;
    private $merk;

    public function __construct($id, $nama_produk, $harga_produk, $stok_produk, $foto_produk, $jenis, $bahan, $warna, $untuk, $size, $merk) {
        parent::__construct($id, $nama_produk, $harga_produk, $stok_produk, $foto_produk, $jenis, $bahan, $warna);
        $this->untuk = $untuk;
        $this->size = $size;
        $this->merk = $merk;
    }

    public function tampil() {
        parent::tampil();
        echo "Untuk: {$this->untuk}<br>";
        echo "Size: {$this->size}<br>";
        echo "Merk: {$this->merk}<br>";
    }
}
?>
