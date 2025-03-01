public class Aksesoris extends PetShop {
    protected String jenis;
    protected String bahan;
    protected String warna;

    public Aksesoris(int id, String namaProduk, int hargaProduk, int stokProduk, String jenis, String bahan, String warna) {
        super(id, namaProduk, hargaProduk, stokProduk);
        this.jenis = jenis;
        this.bahan = bahan;
        this.warna = warna;
    }

    public String getJenis() {
        return jenis;
    }

    public void setJenis(String jenis) {
        this.jenis = jenis;
    }

    public String getBahan() {
        return bahan;
    }

    public void setBahan(String bahan) {
        this.bahan = bahan;
    }

    public String getWarna() {
        return warna;
    }

    public void setWarna(String warna) {
        this.warna = warna;
    }

    @Override
    public void tampil() {
        super.tampil();
        System.out.println("Jenis: " + jenis);
        System.out.println("Bahan: " + bahan);
        System.out.println("Warna: " + warna);
    }

    public void setDataAksesoris(int id, String namaProduk, int hargaProduk, int stokProduk, String jenis, String bahan, String warna) {
        super.setDataPetShop(id, namaProduk, hargaProduk, stokProduk);
        this.jenis = jenis;
        this.bahan = bahan;
        this.warna = warna;
    }
}
