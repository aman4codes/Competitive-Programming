#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,ans;
	cin>>n;
	int a=(n%3);
	if(a==1)
	{
	    ans=((n/3)*3);
	}
	else if(a==2)
	{
	    ans=(((n/3)+1)*3);
	}
	else
	{
	    ans=n;
	}
	cout<<ans<<endl;

}
