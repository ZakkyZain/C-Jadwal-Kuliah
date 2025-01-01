#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct JadwalKuliah {
    string kelas;
    string mataKuliah;
    string jam;
    string hari;
    string ruang;

};

void tambahJadwal(vector<JadwalKuliah>& daftarJadwal) {
    JadwalKuliah jadwal;
    cout<<"Masukan Kelas : ";
    getline(cin, jadwal.kelas);
    cout<<"Masukan Nama Mata Kuliah : ";
    getline(cin, jadwal.mataKuliah);
    cout<<"Masukan Hari : ";
    getline(cin, jadwal.hari);
    cout<<"Masukan Jam (misal 07:00-08:40) : ";
    getline(cin, jadwal.jam);
    cout<<"Masukan Ruang : ";
    getline(cin, jadwal.ruang);

    daftarJadwal.push_back(jadwal);
    cout<<"Jadwal kuliah telah berhasil ditambahkan!\n"; 
}

void tampilkanJadwal(const vector<JadwalKuliah>& daftarJadwal) {
    if (daftarJadwal.empty()) {
        cout<<"Tidak ada jadwal kuliah yang terdaftar.\n";
        return;
    }

    cout << "\nDAFTAR JADWAL KULIAH:\n";
    cout << "------------------------------------------\n";
    for (const auto& jadwal : daftarJadwal) {
        cout<<"Kelas       : "<<jadwal.kelas<<endl;
        cout<<"Mata Kuliah : "<<jadwal.mataKuliah<<endl;
        cout<<"Hari        : "<<jadwal.hari<<endl;
        cout<<"Jam         : "<<jadwal.jam<<endl;
        cout<<"Ruang       : "<<jadwal.ruang<<endl;
        cout<<"------------------------------------------\n";
    }
}

int main() {
    vector<JadwalKuliah> daftarJadwal;
    int pilihan;

    do {
        cout<<"\nSistem Pembuatan Jadwal Kuliah\n";
        cout<<"1. Tambahkan Jadwal Kuliah\n";
        cout<<"2. Tampilkan Jadwal Kuliah\n";
        cout<<"3. Keluar\n";
        cout<<"Pilih menu: ";
        cin>> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                tambahJadwal(daftarJadwal);
                break;
            case 2:
                tampilkanJadwal(daftarJadwal);
                break;
            case 3:
                cout<<"Keluar dari Program>.\n";
                break;
            default:
                cout<<"Pilihan tidak valid. coba lagi.\n";            
        }
    } while (pilihan != 3);

    return 0;
}