#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;

        int maxCoins = 0;

        for (int zeros = 0; zeros <= N; ++zeros) {
            int ones = N - zeros;

            int coins1 = zeros * A + ones * B + (zeros * ones) * C;

            int coins2 = zeros * A + ones * B + (zeros * ones) * D;

            maxCoins = max({maxCoins, coins1, coins2});
        }

        cout << maxCoins << endl;
    }
    return 0;
}
