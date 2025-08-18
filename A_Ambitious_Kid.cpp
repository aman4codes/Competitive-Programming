#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);

    int min_operations = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            min_operations = 0; // Already has 0, no operations needed
        } else {
            min_operations = min(min_operations, abs(arr[i]));
        }
    }

    cout << min_operations << endl;

    return 0;
}
