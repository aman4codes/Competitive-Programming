#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, x, y;
    cin >> n >> x >> y;
    int cake_in_1=y/x;

    if(n%cake_in_1==0)
    {
        cout<<n/cake_in_1<<endl;
    }
    else
    {
        cout<<(n/cake_in_1) +1<<endl;
    }
}
