#include <iostream>
#include <vector>
using namespace std;

int makan_lumpia(vector<int> list_jumlah_lumpia) {
    int hari = 0;
    int mod_daging = list_jumlah_lumpia[0] % 3;
    hari += list_jumlah_lumpia[0] / 3;
    if (list_jumlah_lumpia[1] == 0 || mod_daging == 0) {
        if (list_jumlah_lumpia[2] != 0) {
            list_jumlah_lumpia[2] += mod_daging;
        } else {
            list_jumlah_lumpia[3] += mod_daging;
        }
    } else {
        hari += 1;
    }

    int mod_ayam = list_jumlah_lumpia[1] % 3;
    hari += list_jumlah_lumpia[1] / 3;
    list_jumlah_lumpia[2] += mod_ayam;

    int mod_udang = list_jumlah_lumpia[2] % 3;
    hari += list_jumlah_lumpia[2] / 3;
    if (mod_udang != 0) {
        hari += 1;
    }

    int mod_ikan = list_jumlah_lumpia[3] % 3;
    hari += list_jumlah_lumpia[3] / 3;
    if (mod_ikan != 0) {
        hari += 1;
    }

    return hari;
}

int main() {
    vector<int> list_jumlah_lumpia(4);
    for (int i = 0; i < 4; ++i) {
        cin >> list_jumlah_lumpia[i];
    }
    cout << makan_lumpia(list_jumlah_lumpia) << endl;
    
    return 0;
}