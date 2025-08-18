// write a code wher you print xth fibonacci number using hashing
#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
int hsh[N];
void xth_fibonaaci(int x)
{
    hsh[0] = hsh[1] = 1;
    for (int i = 2; i < x; i++)
    {
        hsh[i] = hsh[i - 1] + hsh[i - 2];
    }
    cout << hsh[x] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int x;
        cin >> x;
        xth_fibonaaci(x);
    }
}