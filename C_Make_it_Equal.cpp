#include <bits/stdc++.h>
using namespace std;

bool check_freq_element(vector<int> &freq_s, vector<int> &freq_t, int size)
{
    bool check=false;
    for (int i = 0; i < size; i++)
    {
        if (freq_s[i] == freq_t[i])
        {
            check=true;
        }
        else
        {
            check=false;
            break;
        }
    }

    return check;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr_s;
        vector<int> arr_t;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            arr_s.push_back(x);
        }

        for (int j = 0; j < n; j++)
        {
            int y;
            cin >> y;
            arr_t.push_back(y);
        }

        int maxVal_s = *max_element(arr_s.begin(), arr_s.end());
        int maxVal_t = *max_element(arr_t.begin(), arr_t.end());
        vector<int> freq_s(maxVal_s + 1, 0);
        vector<int> freq_t(maxVal_t + 1, 0);

        for (int l : arr_s)
        {
            freq_s[l]++;
        }

        for (int u : arr_t)
        {
            freq_t[u]++;
        }

        if(check_freq_element(freq_s, freq_t, n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            
        }
    }
}