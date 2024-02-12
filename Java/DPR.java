public class DPR {

    private String name;
    private String partai;
    private String jabatan;
    private String komisi;

    public DPR() {
        this.name = "";
        this.partai = "";
        this.jabatan = "";
        this.komisi = "";
    }

    public DPR(String name, String partai, String jabatan, String komisi) {
        this.name = name;
        this.partai = partai;
        this.jabatan = jabatan;
        this.komisi = komisi;
    }

    // mengambil dan mengatur untuk name
    public String getName() {
        return this.name;
    }

    public void setName(String name) {
        this.name = name;
    }

    // mengambil dan mengatur untuk partai
    public String getPartai() {
        return this.partai;
    }

    public void setPartai(String partai) {
        this.partai = partai;
    }

    // mengambil dan mengatur untuk jabatan
    public String getJabatan() {
        return this.jabatan;
    }

    public void setJabatan(String jabatan) {
        this.jabatan = jabatan;
    }

    // mengambil dan mengatur untuk komisi
    public String getKomisi() {
        return this.komisi;
    }

    public void setKomisi(String komisi) {
        this.komisi = komisi;
    }
}
