#include <iostream>
#include <string>
using namespace std;

int get_min_cost(const string& s) {
    int max_chain = 0, current = 0;
    char prev = ' ';

    for (char c : s) {
        if (c == prev) {
            current++;
        } else {
            current = 1;
        }
        prev = c;
        max_chain = max(max_chain, current);
    }

    return max_chain + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << get_min_cost(s) << endl;
    }
    return 0;
}
