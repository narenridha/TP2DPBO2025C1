<?php
require_once "Baju.php";

$produk1 = new Petshop(1, "Makanan Kucing", 50000, 10, "images/makanan_kucing.png");
$produk2 = new Aksesoris(2, "Kalung Anjing", 20000, 5, "images/kalung_anjing.jpg", "Kalung", "Kulit", "Merah");
$produk3 = new Baju(3, "Baju Anjing", 75000, 7, "images/baju.jpeg", "Pakaian", "Katun", "Biru", "Anjing", "M", "PetFashion");

echo "<h2>Produk di Petshop</h2>";
$produk1->tampil();
echo "<hr>";

echo "<h2>Produk Aksesoris</h2>";
$produk2->tampil();
echo "<hr>";

echo "<h2>Produk Baju</h2>";
$produk3->tampil();
?>
