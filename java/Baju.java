public class Baju extends Aksesoris {
    private String untuk;
    private String size;
    private String merk;

    public Baju(int id, String namaProduk, int hargaProduk, int stokProduk, String jenis, String bahan, String warna, String untuk, String size, String merk) {
        super(id, namaProduk, hargaProduk, stokProduk, jenis, bahan, warna);
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }

    public String getUntuk() {
        return untuk;
    }

    public void setUntuk(String untuk) {
        this.untuk = untuk;
    }

    public String getSize() {
        return size;
    }

    public void setSize(String size) {
        this.size = size;
    }

    public String getMerk() {
        return merk;
    }

    public void setMerk(String merk) {
        this.merk = merk;
    }

    @Override
    public void tampil() {
        super.tampil();
        System.out.println("Untuk: " + untuk);
        System.out.println("Size: " + size);
        System.out.println("Merk: " + merk);
    }

    public void setDataBaju(int id, String namaProduk, int hargaProduk, int stokProduk, String jenis, String bahan, String warna, String untuk, String size, String merk) {
        super.setDataAksesoris(id, namaProduk, hargaProduk, stokProduk, jenis, bahan, warna);
        this.untuk = untuk;
        this.size = size;
        this.merk = merk;
    }
}
