#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	long long a,b,c,ds;
    	if(n==1)
    	{
    		cout<<1<<endl;
    		continue;
		}
		if(n==2)
    	{
    		cout<<2<<endl;
    		continue;
		}
		if(n==3)
    	{
    		cout<<4<<endl;
    		continue;
		}
		if(n>3)
    	{
    		a=1;
    		b=2;
    		c=4;
    		while(n>3)
    		{
    			ds=a+b+c;
    			a=b;
    			b=c;
    			c=ds;
    			n--;
			}
			cout<<ds<<endl;
		}
	}
}