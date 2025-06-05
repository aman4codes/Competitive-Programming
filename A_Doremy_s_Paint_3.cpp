#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> freq;

        // Read input and count frequency
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            freq[x]++;
        }

        if (freq.size() >= 3) {
            cout << "No" << endl;
        } else {
            if (freq.size() == 1) {
                cout << "Yes" << endl;
            } else {
                auto it1 = freq.begin();
                auto it2 = next(it1);

                int f1 = it1->second;
                int f2 = it2->second;

                if (abs(f1 - f2) <= 1) {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
            }
        }
    }

    return 0;
}
