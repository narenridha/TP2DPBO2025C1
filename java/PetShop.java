public class PetShop {
    protected int id;
    protected String namaProduk;
    protected int hargaProduk;
    protected int stokProduk;

    public PetShop(int id, String namaProduk, int hargaProduk, int stokProduk) {
        this.id = id;
        this.namaProduk = namaProduk;
        this.hargaProduk = hargaProduk;
        this.stokProduk = stokProduk;
    }

    public int getId() {
        return id;
    }

    public String getNamaProduk() {
        return namaProduk;
    }

    public int getHargaProduk() {
        return hargaProduk;
    }

    public int getStokProduk() {
        return stokProduk;
    }

    public void setId(int id) {
        this.id = id;
    }

    public void setNamaProduk(String namaProduk) {
        this.namaProduk = namaProduk;
    }

    public void setHargaProduk(int hargaProduk) {
        this.hargaProduk = hargaProduk;
    }

    public void setStokProduk(int stokProduk) {
        this.stokProduk = stokProduk;
    }

    public void tampil() {
        System.out.println("ID: " + id);
        System.out.println("Nama Produk: " + namaProduk);
        System.out.println("Harga: " + hargaProduk);
        System.out.println("Stok: " + stokProduk);
    }

    public void setDataPetShop(int id, String namaProduk, int hargaProduk, int stokProduk) {
        this.id = id;
        this.namaProduk = namaProduk;
        this.hargaProduk = hargaProduk;
        this.stokProduk = stokProduk;
    }
}
