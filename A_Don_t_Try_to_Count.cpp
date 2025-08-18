#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    for (int i = 0; i <= 6; ++i) {
        if (x.find(s) != string::npos) {
            cout << i << '\n';
            return;
        }
        x += x; // append current x to itself (not the original)
    }

    cout << -1 << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
