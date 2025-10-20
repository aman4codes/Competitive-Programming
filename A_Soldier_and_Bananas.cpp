#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    long long total_cost = 1LL * k * w * (w + 1) / 2;
    long long borrow = total_cost - n;

    if (borrow < 0)
        borrow = 0;
    cout << borrow << endl;

    return 0;
}
