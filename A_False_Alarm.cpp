#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        int first = -1, last = -1;

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                if (first == -1) first = i;
                last = i;
            }
        }


        if ((last - first + 1) <= x)
        {
            cout << "YES\n";
        }
        else 
        {
            cout << "NO\n";
        }
    }

    return 0;
}
