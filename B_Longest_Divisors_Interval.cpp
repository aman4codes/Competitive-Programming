#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int r = 1;
        while (n % r == 0) {
            r++;
        }
        cout << r - 1 << "\n";
    }
    return 0;
}
