#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll a, b;
    cin >> a >> b;

    if (b == 1) {
        if ((a + 1) % 2 == 0)
            cout << a + 1 << "\n";
        else
            cout << -1 << "\n";
        return;
    }

    ll maxx = -1;
    for (ll i = 1; i * i <= b; i++) {
        if (b % i == 0) {
            ll x = i;
            ll y = b / i;

            ll temp1 = a * x + y;
            if (temp1 % 2 == 0) maxx = max(maxx, temp1);

            ll temp2 = a * y + x;
            if (temp2 % 2 == 0) maxx = max(maxx, temp2);
        }
    }

    cout << maxx << "\n";
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
