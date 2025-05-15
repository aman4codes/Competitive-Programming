#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, y;
        cin >> n >> y;
        vector<int> arr(n);
        int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int j = 0; j < n; j++) {
            sum |= arr[j];  // Bitwise OR accumulation
        }

        // Checking if a valid 'x' exists
        int x = y - sum;
        if ((y & sum) == sum) {  // Ensures all '1's in sum are also in 'y'
            cout << x << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}
