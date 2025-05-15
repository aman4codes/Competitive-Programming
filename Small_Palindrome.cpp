#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    string palindrome="";
        if(x!=0 && y!=0)
        {
	    for(int i=0;i<(x/2);i++)
	    {
	        palindrome=palindrome+"1";
	    }
        int c=((x/2)-1);
	    for(int j=c;j<(c+y);j++)
	    {
	        palindrome=palindrome+'2';
	    }
        int d=((((x/2)-1)+y)-1);
        int e=(x+y)-1;
	    for(int k=d;k<e-1;k++)
	    {
	        palindrome=palindrome+'1';
	    }
	    cout<<palindrome<<endl;
        }
        else if(x==0 && y!=0)
        {
            string num(y,'2');
            cout<<num<<endl;
        }
        else if(x!=0 && y==0)
        {
            string num2(x,'1');
            cout<<num2<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
}
}
