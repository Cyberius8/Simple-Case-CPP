#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> kartu(n);
    map<int, int> posisi;

    for (int i = 0; i < n; i++) {
        cin >> kartu[i];
        posisi[kartu[i]] = i;
    }

    for (int i = 0; i < k; i++) {
        char operasi;
        int nilai;
        cin >> operasi >> nilai;

        if (operasi == 'A') {
            kartu.insert(kartu.begin(), nilai);
            posisi[nilai] = 0;
            for (auto& it : posisi) {
                if (it.second > 0) {
                    it.second++;
                }
            }
        } else if (operasi == 'G') {
            int pos = posisi[nilai];
            vector<int> simpan;
            for (int j = 0; j < pos; j++) {
                simpan.push_back(kartu[j]);
            }
            kartu.erase(kartu.begin(), kartu.begin() + pos + 1);
            kartu.insert(kartu.end(), simpan.begin(), simpan.end());
            kartu.push_back(nilai);
            for (auto& it : posisi) {
                if (it.second < pos) {
                    it.second = kartu.size() - pos + it.second;
                } else if (it.second > pos) {
                    it.second -= pos + 1;
                }
            }
            posisi[nilai] = kartu.size() - 1;
        }
    }

    cout << kartu.size() << endl;
    for (int i = 0; i < kartu.size(); i++) {
        cout << kartu[i] << " ";
    }
    cout << endl;

    return 0;
}