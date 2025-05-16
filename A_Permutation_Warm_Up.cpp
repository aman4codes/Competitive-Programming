#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if((n%2)==0)
        {
            int k=(n/2);
            cout<<((k*k)+1)<<endl;
        }
        else
        {
            int m=((n+1)/2);
            cout<<(((m-1)*m)+1)<<endl;
        }
    }
    return 0;
}
