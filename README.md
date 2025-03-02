# TP2DPBO2025C1

Saya Narendra Ridha Baihaqi dengan NIM 2308882 mengerjakan Tugas Praktikum 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

---

#### **Struktur Pewarisan (Inheritance)**
1. **Kelas `PetShop` (Parent Class)**
   - Berisi atribut umum untuk produk di pet shop, yaitu:  
     - `id`: ID produk  
     - `nama_produk`: Nama produk  
     - `harga_produk`: Harga produk  
     - `stok_produk`: Stok produk  
     - `foto_produk` (khusus PHP)  

2. **Kelas `Aksesoris` (Child dari `PetShop`)**
   - Menambahkan atribut khusus untuk aksesoris:
     - `jenis`: Jenis aksesoris  
     - `bahan`: Bahan aksesoris  
     - `warna`: Warna aksesoris  

3. **Kelas `Baju` (Child dari `Aksesoris`)**
   - Menambahkan atribut khusus untuk baju:
     - `untuk`: Ditujukan untuk siapa (misal: anjing, kucing, dll.)  
     - `size`: Ukuran baju  
     - `merk`: Merk baju  

---
### **Diagram** ###
![image](https://github.com/user-attachments/assets/dda4886b-6718-4f55-927b-18e7a2efa586)
---
### **Perbedaan Implementasi pada Tiap Bahasa**
| Bahasa | Cara Input Data | Pewarisan |
|--------|---------------|-----------|
| **C++** | Menggunakan `cin` untuk input dari pengguna | `class Baju : public Aksesoris` |
| **Java** | Menggunakan `Scanner` untuk input dari pengguna | `class Baju extends Aksesoris` |
| **Python** | Menggunakan `input()` untuk input dari pengguna | `class Baju(Aksesoris)` |
| **PHP** | **Hardcoded** (tanpa input dari pengguna) | `class Baju extends Aksesoris` |

---

### **Penjelasan Implementasi di Tiap Bahasa**

#### **1. Implementasi dalam C++**
- Menggunakan konsep **class dan inheritance** (`public` inheritance).
- **Menggunakan `cin`** untuk menerima input dari pengguna.
- **Menggunakan method `tampil()`** untuk menampilkan data.

#### **2. Implementasi dalam Java**
- **Menggunakan `extends`** untuk pewarisan.
- **Menggunakan `Scanner`** untuk menerima input dari pengguna.
- **Menggunakan method `display()`** untuk menampilkan data.

#### **3. Implementasi dalam Python**
- **Menggunakan `class` dengan pewarisan langsung** (tanpa `extends` seperti di Java).
- **Menggunakan `input()`** untuk menerima data dari pengguna.
- **Menggunakan method `tampil()`** untuk menampilkan data.

#### **4. Implementasi dalam PHP**
- **Hardcoded**: Data dimasukkan langsung dalam kode, **tidak ada input dari pengguna**.
- **Menggunakan `extends`** untuk pewarisan dalam PHP.
- **Menggunakan method `tampil()`** untuk menampilkan data.
