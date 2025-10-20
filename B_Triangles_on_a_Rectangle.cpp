#include <bits/stdc++.h>
using namespace std;

void solve() {
    int w, h;
    cin >> w >> h;

    long long ans = 0;

    // bottom side (y=0)
    int k;
    cin >> k;
    vector<int> bottom(k);
    for (int i = 0; i < k; i++) cin >> bottom[i];
    ans = max(ans, 1LL * (bottom.back() - bottom.front()) * h);

    // top side (y=h)
    cin >> k;
    vector<int> top(k);
    for (int i = 0; i < k; i++) cin >> top[i];
    ans = max(ans, 1LL * (top.back() - top.front()) * h);

    // left side (x=0)
    cin >> k;
    vector<int> left(k);
    for (int i = 0; i < k; i++) cin >> left[i];
    ans = max(ans, 1LL * (left.back() - left.front()) * w);

    // right side (x=w)
    cin >> k;
    vector<int> right(k);
    for (int i = 0; i < k; i++) cin >> right[i];
    ans = max(ans, 1LL * (right.back() - right.front()) * w);

    cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
