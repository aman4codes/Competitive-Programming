#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int year = stoi(s);
        bool found = false;

        for (int i = 0; i < 100 && !found; i++) {
            for (int j = 0; j < 100; j++) {
                int sum = ((i + j)*(i+j));
                if (year == sum) {
                    cout << i << ' ' << j << endl;
                    found = true;
                    break; // Break inner loop
                }
            }
        }

        if (!found) {
            cout << -1 << endl;
        }
    }
}
