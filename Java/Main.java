import java.util.Scanner;
import java.util.ArrayList;

public class Main {

    // Fungsi untuk menghapus anggota DPR
    public static void deleteDPRByName(ArrayList<DPR> list, String name) {
        for (int i = 0; i < list.size(); i++) {
            if (list.get(i).getName().equalsIgnoreCase(name)) {
                list.remove(i);
                System.out.println("Anggota DPR dengan nama " + name + " berhasil dihapus.");
                return;
            }
        }
        System.out.println("Anggota DPR dengan nama " + name + " tidak ditemukan dalam daftar.");
    }

    // Fungsi untuk menambahkan anggota DPR
    public static void addDPRFromInput(ArrayList<DPR> list, Scanner sc) {
        System.out.println("Masukkan data anggota DPR (Nama Partai Jabatan Komisi):");
        String name = sc.next();
        String partai = sc.next();
        String jabatan = sc.next();
        String komisi = sc.next();

        // Membuat objek DPR baru dan menambahkannya ke dalam ArrayList
        DPR temp = new DPR(name, partai, jabatan, komisi);
        list.add(temp);

        System.out.println("Anggota DPR dengan nama " + name + " berhasil ditambahkan.");
    }

    // Fungsi untuk update anggota DPR
    public static void updateDPRByName(ArrayList<DPR> list, Scanner sc) {
        System.out.println("Masukkan nama anggota DPR yang ingin diperbarui informasinya:");
        String nameUpdate = sc.next();

        boolean found = false;

        for (DPR dpr : list) {
            // Jika data ditemukan
            if (dpr.getName().equalsIgnoreCase(nameUpdate)) {
                found = true;
                System.out.println("Masukkan informasi baru untuk anggota DPR " + nameUpdate + ":");
                System.out.print("Nama: ");
                dpr.setName(sc.next());
                System.out.print("Partai: ");
                dpr.setPartai(sc.next());
                System.out.print("Jabatan: ");
                dpr.setJabatan(sc.next());
                System.out.print("Komisi: ");
                dpr.setKomisi(sc.next());
                System.out.println("Informasi untuk anggota DPR " + nameUpdate + " berhasil diperbarui.");
                break;
            }
        }

        // Jika data tidak ditemukan
        if (!found) {
            System.out.println("Anggota DPR dengan nama " + nameUpdate + " tidak ditemukan dalam daftar.");
        }
    }

    // Fungsi untuk mencetak data anggota DPR
    public static void printDPRData(ArrayList<DPR> list) {
        int maxLengthName = 0;
        int maxLengthPartai = 0;
        int maxLengthJabatan = 0;
        int maxLengthKomisi = 0;

        // Cari panjang maksimum untuk setiap atribut anggota DPR
        for (DPR dpr : list) {
            int nameLength = dpr.getName().length();
            int partaiLength = dpr.getPartai().length();
            int jabatanLength = dpr.getJabatan().length();
            int komisiLength = dpr.getKomisi().length();

            if (nameLength > maxLengthName) {
                maxLengthName = nameLength;
            }
            if (partaiLength > maxLengthPartai) {
                maxLengthPartai = partaiLength;
            }
            if (jabatanLength > maxLengthJabatan) {
                maxLengthJabatan = jabatanLength;
            }
            if (komisiLength > maxLengthKomisi) {
                maxLengthKomisi = komisiLength;
            }
        }

        // Cetak data anggota DPR
        System.out.println(
                "+" + "-".repeat(maxLengthName + maxLengthPartai + maxLengthJabatan + maxLengthKomisi + 28) + "+");
        System.out.printf(
                "| %-2s | %-" + (maxLengthName + 2) + "s | %-" + (maxLengthPartai + 2) + "s | %-"
                        + (maxLengthJabatan + 2) + "s | %-" + (maxLengthKomisi + 6) + "s |\n",
                "No", "Nama", "Partai", "Jabatan", "Komisi");
        System.out.println(
                "+" + "-".repeat(maxLengthName + maxLengthPartai + maxLengthJabatan + maxLengthKomisi + 28) + "+");

        for (int i = 0; i < list.size(); i++) {
            System.out.printf(
                    "| %-2d | %-" + (maxLengthName + 2) + "s | %-" + (maxLengthPartai + 2) + "s | %-"
                            + (maxLengthJabatan + 2) + "s | %-" + (maxLengthKomisi + 6) + "s |\n",
                    i + 1, list.get(i).getName(), list.get(i).getPartai(), list.get(i).getJabatan(),
                    list.get(i).getKomisi());
        }

        System.out.println(
                "+" + "-".repeat(maxLengthName + maxLengthPartai + maxLengthJabatan + maxLengthKomisi + 28) + "+");
    }

    // Fungsi utama
    public static void main(String[] args) {
        DPR rain = new DPR();
        rain.setName("Rain");
        rain.setPartai("Segita");
        rain.setJabatan("Ketua");
        rain.setKomisi("Komisi_1");

        DPR techi = new DPR("techi", "Segita", "Wakil", "Komisi_2");

        int i, n = 0;
        String name;
        String partai;
        String jabatan;
        String komisi;

        ArrayList<DPR> list = new ArrayList<>();

        System.out.println("+==========================================================+");
        System.out.println("+                                                          +");
        System.out.println("+ Saya Raden Rahman Ismail (2200311)                       +");
        System.out.println("+ mengerjakan soal Latihan_Java dalam mata kuliah DPBO     +");
        System.out.println("+ untuk keberkahanNya maka saya tidak melakukan kecurangan +");
        System.out.println("+ seperti yang telah dispesikasikan.Aamiin                 +");
        System.out.println("+                                                          +");
        System.out.println("+==========================================================+");

        System.out.println("\n+=======================================+");
        System.out.println("+ Panduan Program                       +");
        System.out.println("+ Masukan Input dengan format :         +");
        System.out.println("+ Nama Partai Jabatan Komisi            +");
        System.out.println("+=======================================+\n");

        System.out.println("Masukan Jumlah Data : ");
        Scanner sc = new Scanner(System.in);

        try {
            n = sc.nextInt();
        } catch (Exception e) {
            System.out.println("The input is not an integer");
        }

        for (i = 0; i < n; i++) {
            name = sc.next();
            partai = sc.next();
            jabatan = sc.next();
            komisi = sc.next();

            DPR temp = new DPR();
            temp.setName(name);
            temp.setPartai(partai);
            temp.setJabatan(jabatan);
            temp.setKomisi(komisi);
            list.add(temp);
        }

        // Untuk menampilkan automatic output
        System.out.println("\nAutomatic Output");
        System.out.println("Anggota Terdaftar : \n");
        System.out.println("Anggota DPR RI " + rain.getName());
        System.out.println(rain.getName() + " " + rain.getPartai() + " " + rain.getJabatan()
                + " " + rain.getKomisi());
        System.out.println("Anggota DPRD " + techi.getName());
        System.out.println(techi.getName() + " " + techi.getPartai() + " "
                + techi.getJabatan() + " " + techi.getKomisi());
        System.out.println();

        System.out.println("Data :");
        printDPRData(list);

        // Untuk menu
        boolean running = true;
        while (running) {
            System.out.println("\nMenu:");
            System.out.println("1. Tambah Anggota DPR");
            System.out.println("2. Update Anggota DPR");
            System.out.println("3. Hapus Anggota DPR");
            System.out.println("4. Tampilkan Anggota DPR");
            System.out.println("5. Keluar");
            System.out.print("Pilih menu (1-5): ");

            int menu = sc.nextInt();
            switch (menu) {
                case 1:
                    addDPRFromInput(list, sc);
                    break;
                case 2:
                    updateDPRByName(list, sc);
                    break;
                case 3:
                    System.out.print("Masukkan nama anggota DPR yang ingin dihapus: ");
                    String nameToDelete = sc.next();
                    deleteDPRByName(list, nameToDelete);
                    break;
                case 4:
                    System.out.println("Daftar Anggota DPR:");
                    if (list.isEmpty()) {
                        System.out.println("Tidak ada anggota DPR.");
                    } else {
                        printDPRData(list);
                    }
                    break;
                case 5:
                    running = false;
                    break;
                default:
                    System.out.println("Menu tidak valid.");
                    break;
            }
        }

        sc.close();
    }
}
