#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool found = false;

        for (int j = 0; j < n; j++) {
            int gcd_a = arr[j];
            int gcd_b = 0;     

            for (int k = 0; k < n; k++) {
                if (k != j)
                gcd_b = __gcd(gcd_b, arr[k]);
            }

            if (gcd_a != gcd_b) {
                cout << "YES\n";
                for (int k = 0; k < n; k++) {
                    if (k == j)
                        cout << "1 ";
                    else
                        cout << "2 ";
                }
                cout << "\n";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "NO\n";
        }
    }

    return 0;
}
