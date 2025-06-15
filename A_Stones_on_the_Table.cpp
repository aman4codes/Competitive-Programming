#include <bits/stdc++.h>
using namespace std;

int main()
{
    string color;
    int n;
    cin >> n >> color;
    int j=0;
    for (int i = 1; i < n; i++)
    {
        if(color[i-1]==color[i])
        {
            j++;
        }
    }
    cout<<j<<endl;
}