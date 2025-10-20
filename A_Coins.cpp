#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    if (k % 2 == 0) 
    {
        if (n % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
     else
    {
        if (n >= k || n % 2 == 0) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
