#include <bits/stdc++.h>
using namespace std;

bool allDistinct(int year)
{
    string s = to_string(year);
    set<char> digits(s.begin(), s.end());
    return digits.size() == 4;
}

int main()
{
    int y;
    cin >> y;
    y++;

    while (true)
    {
        if (allDistinct(y))
        {
            cout << y << endl;
            break;
        }
        y++;
    }

    return 0;
}
