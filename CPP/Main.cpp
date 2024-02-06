#include <iostream>
#include <list>
#include "DPR.cpp"

using namespace std;

// Fungsi untuk melakukan update data
void updateData(list<DPR> &llist)
{
    int Update_Index;
    cout << "Masukkan indeks data yang ingin diupdate: ";
    cin >> Update_Index;

    cout << "=====   Info Update Data    ===== \n";
    cout << "nama gender jabatan komisi partai  \n";
    cout << "====== Ikuti struktur diatas ==== \n";
    if (Update_Index >= 1 && Update_Index <= llist.size())
    {
        string name, jabatan, komisi, partai;
        char gender;

        cout << "Masukkan data baru : ";
        cin >> name >> gender >> jabatan >> komisi >> partai;

        list<DPR>::iterator it = llist.begin();
        advance(it, Update_Index - 1);

        it->set_name(name);
        it->set_gender(gender);
        it->set_jabatan(jabatan);
        it->set_komisi(komisi);
        it->set_partai(partai);

        cout << "\nData berhasil diperbarui!" << endl;

        cout << "Data terbaru:\n";
        int i = 0;
        for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
        {
            cout << "| " << (i + 1) << ". " << it->get_name() << " - " << it->get_gender() << " - " << it->get_jabatan() << " - " << it->get_komisi() << " - " << it->get_partai() << " | " << '\n';
            i++;
        }
    }
    else
    {
        cout << "Indeks tidak valid!" << endl;
    }
}

// Fungsi untuk menghapus data
void deleteData(list<DPR> &llist)
{
    int DeleteIndex;
    cout << "Masukkan indeks data yang ingin dihapus: ";
    cin >> DeleteIndex;

    if (DeleteIndex >= 1 && DeleteIndex <= llist.size())
    {
        list<DPR>::iterator it = llist.begin();
        advance(it, DeleteIndex - 1);

        llist.erase(it);

        cout << "Data berhasil dihapus!" << endl;

        // Menampilkan data terbaru setelah penghapusan
        cout << "Data terbaru setelah penghapusan:\n";
        int i = 0;
        for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
        {
            cout << "| " << (i + 1) << ". " << it->get_name() << " - " << it->get_gender() << " - " << it->get_jabatan() << " - " << it->get_komisi() << " - " << it->get_partai() << " | " << '\n';
            i++;
        }
    }
    else
    {
        cout << "Indeks tidak valid!" << endl;
    }
}

// Fungsi untuk menambah data baru
void addNewData(list<DPR> &llist)
{
    string name, jabatan, komisi, partai;
    char gender;

    cout << "=====   Info New Data    ===== \n";
    cout << "nama gender jabatan komisi partai  \n";
    cout << "====== Ikuti struktur diatas ==== \n";
    cout << "Masukkan data baru : ";
    cin >> name >> gender >> jabatan >> komisi >> partai;

    DPR newData;
    newData.set_name(name);
    newData.set_gender(gender);
    newData.set_jabatan(jabatan);
    newData.set_komisi(komisi);
    newData.set_partai(partai);

    llist.push_back(newData);

    cout << "Data baru berhasil ditambahkan!" << '\n'
         << endl;

    cout << "Data terbaru setelah penambahan data baru:\n";
    int i = 0;
    for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << "| " << (i + 1) << ". " << it->get_name() << " - " << it->get_gender() << " - " << it->get_jabatan() << " - " << it->get_komisi() << " - " << it->get_partai() << " | " << '\n';

        i++;
    }
}

// Fungsi untuk bantual program
void help()
{
    cout << "=====================================" << endl;
    cout << "Proses penggunaan :" << endl;
    cout << "1. Masukkan jumlah data awal yang ingin dimasukkan." << endl;
    cout << "2. Masukkan data awal satu per satu (nama gender jabatan komisi partai)." << endl;
    cout << "3. Pilih opsi yang ingin dilakukan:" << endl;
    cout << "   a. 'update' untuk memperbarui data." << endl;
    cout << "   b. 'delete' untuk menghapus data." << endl;
    cout << "   c. 'new' untuk menambah data baru." << endl;
    cout << "   d. 'help' untuk menampilkan bantuan." << endl;
    cout << "   e. 'exit' untuk keluar dari program." << endl;
    cout << "=====================================" << endl;
}

// program utama
int main()
{

    // untuk automatic output
    DPR RI;

    RI.set_name("Rais");
    RI.set_gender('L');
    RI.set_jabatan("Wakil");
    RI.set_komisi("Komisi_1");
    RI.set_partai("Mawar_Biru");

    // inisiasi
    int n;
    help();
    cout << "Masukkan jumlah data yang ingin dimasukkan: ";
    cin >> n;

    // membuat list
    list<DPR> llist;

    cout << "=====   Info New Data    ===== \n";
    cout << "nama gender jabatan komisi partai  \n";
    cout << "====== Ikuti struktur diatas ==== \n";
    // untuk input list nama
    for (int i = 0; i < n; i++)
    {
        DPR temp;

        cout << "Masukkan data ke-" << (i + 1) << " : ";

        string name, jabatan, komisi, partai;
        char gender;
        cin >> name >> gender >> jabatan >> komisi >> partai;

        temp.set_name(name);
        temp.set_gender(gender);
        temp.set_jabatan(jabatan);
        temp.set_komisi(komisi);
        temp.set_partai(partai);

        llist.push_back(temp);
    }

    // Automatic Output
    cout << '\n'
         << "Automatic Output : " << '\n';
    cout << "Nama Anggota DPR RI " << RI.get_name() << '\n';
    cout << "Gender Anggota DPR RI " << RI.get_gender() << "\n";
    cout << "Jabatan Anggota DPR RI " << RI.get_jabatan() << "\n";
    cout << "Komisi Anggota DPR RI " << RI.get_komisi() << "\n";
    cout << "Partai Anggota DPR RI " << RI.get_partai() << "\n\n";

    // Output input User
    cout << "Output Inputan : " << '\n';
    int i = 0;
    for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << "| " << (i + 1) << ". " << it->get_name() << " - " << it->get_gender() << " - " << it->get_jabatan() << " - " << it->get_komisi() << " - " << it->get_partai() << " | " << '\n';
        i++;
    }

    // Option untuk memilih fitur;
    string option;

    cout << "=====         Info          ===== \n";
    cout << "Pilih Fitur yang ingin diinginkan \n";
    cout << "Ketik Ulang perintah dengan sesua \n";
    cout << "====== Ikuti struktur diatas ==== \n";

    // Loop untuk Fitur
    while (true)
    {
        cout << "Pilih opsi (update/delete/new/help/exit): ";
        cin >> option;

        if (option == "update")
        {
            updateData(llist);
        }
        else if (option == "delete")
        {
            deleteData(llist);
        }
        else if (option == "new")
        {
            addNewData(llist);
        }
        else if (option == "help")
        {
            help();
        }
        else if (option == "exit")
        {
            break;
        }
        else
        {
            cout << "Opsi tidak valid!" << endl;
        }
    }

    return 0;
}
