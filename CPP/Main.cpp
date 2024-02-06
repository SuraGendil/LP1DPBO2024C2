#include <iostream>
#include <list>
#include "DPR.cpp"

using namespace std;

// Fungsi untuk melakukan update data
void updateData(list<DPR> &llist)
{
    int indexToUpdate;
    cout << "Masukkan indeks data yang ingin diupdate: ";
    cin >> indexToUpdate;

    if (indexToUpdate >= 1 && indexToUpdate <= llist.size())
    {
        string name, jabatan, komisi, partai;
        char gender;

        cout << "Masukkan data baru (nama gender jabatan komisi partai): ";
        cin >> name >> gender >> jabatan >> komisi >> partai;

        list<DPR>::iterator it = llist.begin();
        advance(it, indexToUpdate - 1); // Adjust index to zero-based

        it->set_name(name);
        it->set_gender(gender);
        it->set_jabatan(jabatan);
        it->set_komisi(komisi);
        it->set_partai(partai);

        cout << "Data berhasil diperbarui!" << endl;

        // Menampilkan data terbaru
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
    int indexToDelete;
    cout << "Masukkan indeks data yang ingin dihapus: ";
    cin >> indexToDelete;

    if (indexToDelete >= 1 && indexToDelete <= llist.size())
    {
        list<DPR>::iterator it = llist.begin();
        advance(it, indexToDelete - 1); // Adjust index to zero-based

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

    cout << "Masukkan data baru (nama gender jabatan komisi partai): ";
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

    // Menampilkan data terbaru setelah penambahan data baru
    cout << "Data terbaru setelah penambahan data baru:\n";
    int i = 0;
    for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << "| " << (i + 1) << ". " << it->get_name() << " - " << it->get_gender() << " - " << it->get_jabatan() << " - " << it->get_komisi() << " - " << it->get_partai() << " | " << '\n';

        i++;
    }
}

void help()
{
    cout << "=====================================" << endl;
    cout << "Cara menggunakan program:" << endl;
    cout << "1. Masukkan jumlah data awal yang ingin dimasukkan." << endl;
    cout << "2. Masukkan data awal satu per satu (nama gender jabatan komisi partai)." << endl;
    cout << "3. Pilih opsi yang ingin dilakukan:" << endl;
    cout << "   - 'update' untuk memperbarui data." << endl;
    cout << "   - 'delete' untuk menghapus data." << endl;
    cout << "   - 'new' untuk menambah data baru." << endl;
    cout << "   - 'help' untuk menampilkan bantuan." << endl;
    cout << "   - 'exit' untuk keluar dari program." << endl;
    cout << "=====================================" << endl;
}

int main()
{
    DPR RI;

    RI.set_name("Ra");
    RI.set_gender('L');
    RI.set_jabatan("Wakil");
    RI.set_komisi("Komisi_1");
    RI.set_partai("Mawar");

    int n;
    help();
    cout << "Masukkan jumlah data yang ingin dimasukkan: ";
    cin >> n;

    list<DPR> llist;

    for (int i = 0; i < n; i++)
    {
        DPR temp;
        cout << "Masukkan data ke-" << (i + 1) << " (nama gender jabatan komisi partai): ";
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

    cout << '\n'
         << "Automatic Output : " << '\n';
    cout << "Nama Anggota DPR RI " << RI.get_name() << '\n';
    cout << "Gender Anggota DPR RI " << RI.get_gender() << "\n";
    cout << "Jabatan Anggota DPR RI " << RI.get_jabatan() << "\n";
    cout << "Komisi Anggota DPR RI " << RI.get_komisi() << "\n";
    cout << "Partai Anggota DPR RI " << RI.get_partai() << "\n\n";

    cout << "Iteration Output : " << '\n';

    int i = 0;
    for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
    {
        cout << "| " << (i + 1) << ". " << it->get_name() << " - " << it->get_gender() << " - " << it->get_jabatan() << " - " << it->get_komisi() << " - " << it->get_partai() << " | " << '\n';
        i++;
    }

    // string option;
    string option;

    // Loop untuk memungkinkan pengguna memilih opsi lain setelah menyelesaikan satu operasi
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
            help(); // Memanggil fungsi help
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
