#include <iostream>
#include <string>

using namespace std;

class Mahasiswa {
private:
    string nama;
    string nim;
    string prodi;
    string matkul;
    double nilai_tugas;
    double nilai_quis;
    double nilai_uts;
    double nilai_uas;
    string dosen_pa;

public:
    Mahasiswa(string nama, string nim, string prodi, string matkul, double nilai_tugas, double nilai_quis, double nilai_uts, double nilai_uas, string dosen_pa) {
        this->nama = nama;
        this->nim = nim;
        this->prodi = prodi;
        this->matkul = matkul;
        this->nilai_tugas = nilai_tugas;
        this->nilai_quis = nilai_quis;
        this->nilai_uts = nilai_uts;
        this->nilai_uas = nilai_uas;
        this->dosen_pa = dosen_pa;
    }

    double hitung_nilai_akhir() {
        return (nilai_tugas + nilai_quis + nilai_uts + nilai_uas) / 4;
    }

    char konversi_nilai_huruf(double nilai_akhir) {
        if (nilai_akhir >= 80) {
            return 'A';
        } else if (nilai_akhir >= 70) {
            return 'B';
        } else if (nilai_akhir >= 60) {
            return 'C';
        } else if (nilai_akhir >= 50) {
            return 'D';
        } else {
            return 'E';
        }
    }

    void cetak_khs() {
        double nilai_akhir = hitung_nilai_akhir();
        char nilai_huruf = konversi_nilai_huruf(nilai_akhir);

        cout << "Nama Mahasiswa: " << nama << endl;
        cout << "NIM: " << nim << endl;
        cout << "Program Studi: " << prodi << endl;
        cout << "Mata Kuliah: " << matkul << endl;
        cout << "Nilai Tugas: " << nilai_tugas << endl;
        cout << "Nilai Quis: " << nilai_quis << endl;
        cout << "Nilai UTS: " << nilai_uts << endl;
        cout << "Nilai UAS: " << nilai_uas << endl;
        cout << "Dosen Pembimbing Akademik: " << dosen_pa << endl;
        cout << "Nilai Akhir: " << nilai_akhir << endl;
        cout << "Nilai Huruf: " << nilai_huruf << endl;
    }
};

int main() {
    string nama, nim, prodi, matkul, dosen_pa;
    double nilai_tugas, nilai_quis, nilai_uts, nilai_uas;

    cout << "Masukkan nama mahasiswa: ";
    getline(cin, nama);
    cout << "Masukkan NIM mahasiswa: ";
    getline(cin, nim);
    cout << "Masukkan program studi mahasiswa: ";
    getline(cin, prodi);
    cout << "Masukkan mata kuliah: ";
    getline(cin, matkul);
    cout << "Masukkan nilai tugas: ";
    cin >> nilai_tugas;
    cout << "Masukkan nilai quis: ";
    cin >> nilai_quis;
    cout << "Masukkan nilai UTS: ";
    cin >> nilai_uts;
    cout << "Masukkan nilai UAS: ";
    cin >> nilai_uas;
    cin.ignore();  
    cout << "Masukkan nama dosen pembimbing akademik: ";
    getline(cin, dosen_pa);

    Mahasiswa mahasiswa(nama, nim, prodi, matkul, nilai_tugas, nilai_quis, nilai_uts, nilai_uas, dosen_pa);

    cout << "\nKartu Hasil Studi (KHS):" << endl;
    mahasiswa.cetak_khs();

    return 0;
}
