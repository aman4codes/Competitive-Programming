#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        string S;
        cin >> N >> S;

        vector<bool> lit(N, false);

        for (int i = 0; i < N; ++i) {
            if (S[i] == '1') {
                if (i > 0 && !lit[i - 1]) {
                    // point light to left
                    lit[i] = true;
                    lit[i - 1] = true;
                } else {
                    // point light to right (if possible)
                    lit[i] = true;
                    if (i + 1 < N)
                        lit[i + 1] = true;
                }
            }
        }

        bool allLit = true;
        for (int i = 0; i < N; ++i) {
            if (!lit[i]) {
                allLit = false;
                break;
            }
        }

        cout << (allLit ? "Yes" : "No") << endl;
    }
    return 0;
}
