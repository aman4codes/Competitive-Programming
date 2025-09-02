#include <bits/stdc++.h>
using namespace std;

int fun() {
    int a, b;
    cin >> a >> b;

    for (int j = 0; j <= a; j++) {
        if (a % b == 0) {
            return j;
        }
        a = a + 1;
    }

    return -1;
}

int main() {
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++) {
        cout << fun() << "\n";
    }

    return 0;
}
