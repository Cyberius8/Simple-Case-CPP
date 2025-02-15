#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, P, Q;
    cin >> N >> P >> Q;

    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        long long koin = 0;
        long long tentara = A[i];

        while (tentara > 0) {
            if (tentara % 3 == 0 && Q <= tentara / 3 * 2 && Q <= P * 2) {
                koin += Q;
                tentara -= 2 * (tentara / 3);
            } else if (tentara % 2 == 0 && P <= tentara / 2) {
                koin += P;
                tentara /= 2;
            } else {
                koin += 1;
                tentara -= 1;
            }
        }

        cout << koin;
    }

    return 0;
}