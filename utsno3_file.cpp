#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan nilai n: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i += 2) { // Melakukan iterasi dari 1 hingga n dengan langkah 2 untuk mendapatkan bilangan ganjil
        sum += i * i; // Menambahkan kuadrat dari setiap bilangan ganjil ke variabel sum
    }

    cout << "n : " << n << " = " << sum << endl;

    return 0;
}
