// Import Libarary.
#include <iostream>
#include <string>

// using standard namespace
using namespace std;

class DPR
{
private:
    string name;
    char gender;
    string partai;
    string jabatan;
    string komisi;

public:
    DPR()
    {
        this->name = "";
        this->gender = '-';
        this->partai = "";
        this->jabatan = "";
        this->komisi = "";
    }
    
    DPR(string name, char gender, string partai, string jabatan, string komisi)
    {
        this->name = name;
        this->gender = gender;
        this->partai = partai;
        this->jabatan = jabatan;
        this->komisi = komisi;
    }

    // Menggambil nama dan set nama
    string get_name()
    {
        return this->name;
    }

    void set_name(string name)
    {
        this->name = name;
    }

    // menggambil gender dan set gender
    char get_gender()
    {
        return this->gender;
    }

    void set_gender(char gender)
    {
        this->gender = gender;
    }

    // menggambil partai dan set partai
    string get_partai()
    {
        return this->partai;
    }

    void set_partai(string partai)
    {
        this->partai = partai;
    }

    // menggambil jabatan dan set jabatan
    string get_jabatan()
    {
        return this->jabatan;
    }

    void set_jabatan(string jabatan)
    {
        this->jabatan = jabatan;
    }

    // menggambil komisi dan set komisi
    string get_komisi()
    {
        return this->komisi;
    }

    void set_komisi(string komisi)
    {
        this->komisi = komisi;
    }


        ~DPR()
    {
    }
};