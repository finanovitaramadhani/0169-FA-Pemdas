// UASPemdas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class MasukUniversitas {
public:
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;

    void output() {
        cout << "uangPendaftaran: " << uangPendaftaran << endl;
        cout << "uangSemesterPertama: " << uangSemesterPertama << endl;
        cout << "uangBangunan: " << uangBangunan << endl;
        cout << "totalBiaya:" << totalBiaya << endl;
    }
};

class MasukUniversitas {
private:
    string SNBT;
    string SNBP;

public:
    MasukUniversitas() {
        int uangPendaftaran;
        uangPendaftaran = 0;

        void setuangPendaftaran(string a, string b,) {
            x = a;
            x = b;
        }

    }

    virtual void namaJalurMasuk() {
        cout << "SNBT: ";
        cin >> SNBT;
        cout << "SNBP: ";
        cin >> SNBP;

        return;
    }

    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }

    float getUangPendaftaran() {
        return uangPendaftaran;
    }
};

class SNBT : public MasukUniversitas {
public:
    SNBT(int puangPendaftaran) :
        MasukUniversitas(uangPendaftaran)
    {
        cout << "nilai uangPendaftaran\n" << endl;
    }
    SNBT(int puangSemesterPertama) :
        MasukUniversitas(uangSemesterPertama)
    {
        cout << "nilai uangSemesterPertama\n" << endl;
    }
    SNBT(int puangBangunan) :
        MasukUniversitas(uangBangunan)
    {
        cout << "nilai uangBangunan\n" << endl;
    }
};

class SNBP : public MasukUniversitas {
public:
    SNBP
};

int main()
{
    
}

