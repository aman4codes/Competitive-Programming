#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // your code here
    long long n;
    cin >> n;
    vector<long long> first_element;
    vector<long long> second_element;
    for (long long i = 0; i < n; i++)
    {
        long long m;
        cin >> m;
        vector<long long> arr_m(m);
        for (long long j = 0; j < m; j++)
        {
            cin >> arr_m[j];
        }
        sort(arr_m.begin(), arr_m.end());
        first_element.push_back(arr_m[0]);
        second_element.push_back(arr_m[1]);
    }

    sort(first_element.begin(), first_element.end());
    sort(second_element.begin(), second_element.end());

    long long second_elements = accumulate(second_element.begin(), second_element.end(), 0LL);

    long long real_ans = first_element[0] + second_elements - second_element[0];

    cout << real_ans  << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}