#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x = 0;  // initial value

    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;

        if (s.find("++") != string::npos) {
            x++;
        } else {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}
