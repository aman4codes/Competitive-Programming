#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int L, R;
        cin >> L >> R;

        // The number of distinct reachable integers is the number of integers from 2L to 2R
        int result = 2 * R - 2 * L + 1;

        cout << result << endl;
    }
    return 0;
}
