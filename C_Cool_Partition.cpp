#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        unordered_map<int,int> last;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            last[a[i]] = i;
        }
        int segments = 0, maxLast = 0;
        for (int i=0; i<n; i++) {
            maxLast = max(maxLast, last[a[i]]);
            if (i == maxLast) {
                segments++;
            }
        }
        cout << segments << "\n";
    }
    return 0;
}
