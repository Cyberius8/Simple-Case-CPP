#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>

using namespace std;

// Fungsi utama
int main() {
    int N;
    cin >> N;

    vector<int> volumes(N);
    for (int i = 0; i < N; ++i) {
        cin >> volumes[i];
    }

    // Periksa apakah semua volume sudah sama
    bool all_equal = all_of(volumes.begin(), volumes.end(), [&](int v) { return v == volumes[0]; });

    if (all_equal) {
        cout << "SESUAI" << endl;
        return 0;
    }

    // Hitung total volume dan target volume untuk setiap gelas
    int total_volume = accumulate(volumes.begin(), volumes.end(), 0);
    if (total_volume % N != 0) {
        cout << "TIDAK SESUAI" << endl;
        return 0;
    }

    int target_volume = total_volume / N;

    unordered_map<int, int> over, under;
    for (int i = 0; i < N; ++i) {
        if (volumes[i] > target_volume) {
            over[volumes[i] - target_volume] = i + 1; // menyimpan kelebihan volume dan indeks gelas
        } else if (volumes[i] < target_volume) {
            under[target_volume - volumes[i]] = i + 1; // menyimpan kekurangan volume dan indeks gelas
        }
    }

    for (const auto& o : over) {
        if (under.find(o.first) != under.end()) {
            cout << o.first << " " << o.second << " " << under[o.first] << endl;
            return 0;
        }
    }

    cout << "TIDAK SESUAI" << endl;
    return 0;
}
