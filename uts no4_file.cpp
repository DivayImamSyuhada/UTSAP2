#include <iostream>
#include <cstdlib> // Untuk menggunakan fungsi system
using namespace std; // Menggunakan namespace std agar tidak perlu menuliskan std:: sebelum fungsi-fungsi standar

int main() {
    system("CLS"); // Menggunakan fungsi system untuk membersihkan layar (hanya berfungsi di Windows)

    int umur; // Deklarasi variabel umur dengan tipe data int, bukan string
    cout << "Tebak Umur Saya: "; // Menambahkan titik koma di akhir pernyataan
    cin >> umur; // Menggunakan operator >> untuk input dari pengguna

    if (umur == 20) { // Menggunakan operator == untuk perbandingan, bukan operator =
        cout << "Jawaban Anda Benar" << endl;
    } else { // Menggunakan else tanpa kondisi
        cout << "Jawaban Salah, Coba Lagi..." << endl; // Menambahkan titik koma di akhir pernyataan
        // Menghapus statement goto, karena tidak disarankan digunakan
    }
    
    cout << "Program Selesai";

    return 0;
}
