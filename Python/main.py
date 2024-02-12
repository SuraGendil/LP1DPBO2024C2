from DPR import DPR

def tambah_data():
    print("Masukkan data anggota DPR (Nama Partai Jabatan Komisi):")
    name = input("Nama anggota DPR: ")
    partai = input("Partai: ")
    jabatan = input("Jabatan: ")
    komisi = input("Komisi: ")

    new_dpr = DPR(name, partai, jabatan, komisi)
    DPRs.append(new_dpr)

def hapus_data():
    nama = input("Masukkan nama anggota DPR yang ingin dihapus: ")
    global DPRs
    DPRs = [dpr for dpr in DPRs if dpr.get_name() != nama]
    print("Data anggota DPR dengan nama", nama, "berhasil dihapus.")

def Update_data():
    nama = input("Masukkan nama anggota DPR yang ingin diperbarui : ")
    for dpr in DPRs:
        if dpr.get_name() == nama:
            print("Data saat ini untuk anggota DPR", nama, ":")
            print("Partai:", dpr.get_partai())
            print("Jabatan:", dpr.get_jabatan())
            print("Komisi:", dpr.get_komisi())
            
            print("\nMasukkan data baru untuk anggota DPR", nama, ":")
            partai_baru = input("Partai : ")
            jabatan_baru = input("Jabatan : ")
            komisi_baru = input("Komisi : ")

            dpr.set_partai(partai_baru)
            dpr.set_jabatan(jabatan_baru)
            dpr.set_komisi(komisi_baru)

            print("Data anggota DPR dengan nama", nama, "berhasil diperbarui.")
            return

    print("Anggota DPR dengan nama", nama, "tidak ditemukan.")

def print_data():
    print("Output:")
    
    # Menentukan panjang maksimum untuk setiap kolom
    max_name_length = max(len(dpr.get_name()) for dpr in DPRs)
    max_partai_length = max(len(dpr.get_partai()) for dpr in DPRs)
    max_jabatan_length = max(len(dpr.get_jabatan()) for dpr in DPRs)
    max_komisi_length = max(len(dpr.get_komisi()) for dpr in DPRs)
    
    # Menampilkan garis atas tabel
    print(f"+-----+{'-' * (max_name_length + 2)}+{'-' * (max_partai_length + 2)}+{'-' * (max_jabatan_length + 2)}+{'-' * (max_komisi_length + 2)}+")
    
    # Menampilkan header tabel
    print(f"| {'No':<3} | {'Nama':<{max_name_length}} | {'Partai':<{max_partai_length}} | {'Jabatan':<{max_jabatan_length}} | {'Komisi':<{max_komisi_length}} |")
    
    # Menampilkan garis antara header dan data
    print(f"+-----+{'-' * (max_name_length + 2)}+{'-' * (max_partai_length + 2)}+{'-' * (max_jabatan_length + 2)}+{'-' * (max_komisi_length + 2)}+")
    
    # Menampilkan data anggota DPR
    for i, dpr in enumerate(DPRs, start=1):
        print(f"| {i:<3} | {dpr.get_name():<{max_name_length}} | {dpr.get_partai():<{max_partai_length}} | {dpr.get_jabatan():<{max_jabatan_length}} | {dpr.get_komisi():<{max_komisi_length}} |")
    
    # Menampilkan garis bawah tabel
    print(f"+-----+{'-' * (max_name_length + 2)}+{'-' * (max_partai_length + 2)}+{'-' * (max_jabatan_length + 2)}+{'-' * (max_komisi_length + 2)}+")




# Fungsi utama program

# Atur Automatic Output
# Output 1 
rain = DPR()
rain.set_name("Rain")
rain.set_partai("Beringin")
rain.set_jabatan("Ketua")
rain.set_komisi("Komisi_1")
# Output 2
techi = DPR("Techi", "Beringin", "Ketua", "komisi_2")

DPRs = []

# membuat pembuka dan pemberitahuan + Janji
print("+==========================================================+")
print("+                                                          +")
print("+ Saya Raden Rahman Ismail (2200311)                       +");
print("+ mengerjakan soal Latihan_Python dalam mata kuliah DPBO   +");
print("+ untuk keberkahanNya maka saya tidak melakukan kecurangan +");
print("+ seperti yang telah dispesikasikan.Aamiin                 +");
print("+                                                          +");
print("+==========================================================+");

print("\n+=======================================+");
print("+ Panduan Program                       +");
print("+ Masukan Input dengan format :         +");
print("+ Nama Partai Jabatan Komisi            +");
print("+=======================================+\n");

# Untuk meminta inputan
print("Masukan Jumlah Data : ");
n = int(input())
for _ in range(n):
    name, partai, jabatan, komisi = input().split()
    DPRs.append(DPR(name, partai, jabatan, komisi))

# Melakuakn print 
print()
print("Automatic Output : ")
print("Anggota DPR : ", rain.get_name(), "-", rain.get_partai(), "-", rain.get_jabatan(), "-", rain.get_komisi())
print("Anggota DPRD : ", techi.get_name(), "-", techi.get_partai(), "-", techi.get_jabatan(), "-", techi.get_komisi())

print_data()

# Fitur Menu
while True:
    print("\nMenu:");
    print("1. Tambah Anggota DPR");
    print("2. Update Anggota DPR");
    print("3. Hapus Anggota DPR");
    print("4. Tampilkan Anggota DPR");
    print("5. Keluar");

    pilihan = input("Pilih menu (1-5): ")

    if pilihan == '1':
        tambah_data()
    elif pilihan == '2':
        hapus_data()
    elif pilihan == '3':
        Update_data()
    elif pilihan == '4':
        print_data()
    elif pilihan == '5':
        print("Terima kasih telah menggunakan program.")
        break
    else:
        print("Menu tidak valid.")

