#include <iostream>
#include <string>

using namespace std;

int main() {
    const int num_candidates = 3;
    string candidates[num_candidates] = {"Candidate A", "Candidate B", "Candidate C"};
    int votes[num_candidates] = {0};

    cout << "Pemilihan Presiden\n";
    cout << "==================\n";

    int vote;
    do {
        cout << "Pilih kandidat Anda (1-" << num_candidates << ") atau ketik 0 untuk keluar: ";
        cin >> vote;

        if (vote >= 1 && vote <= num_candidates) {
            votes[vote - 1]++;
            cout << "Anda memilih " << candidates[vote - 1] << ".\n";
        } else if (vote != 0) {
            cout << "Pilihan tidak valid. Silakan pilih antara 1 dan " << num_candidates << ".\n";
        }
    } while(vote != 0);

    cout << "\nHasil Pemilihan Presiden:\n";
    cout << "--------------------------\n";

    int max_votes = 0;
    int winner_index = -1;

    for (int i = 0; i < num_candidates; ++i) {
        cout << candidates[i] << ": " << votes[i] << " suara\n";
        if (votes[i] > max_votes) {
            max_votes = votes[i];
            winner_index = i;
        }
    }

    if (winner_index != -1) {
        cout << "\n" << candidates[winner_index] << " terpilih sebagai Presiden.\n";
    } else {
        cout << "\nTidak ada pemenang yang jelas. Mohon ulangi pemilihan.\n";
    }

    return 0;
}
