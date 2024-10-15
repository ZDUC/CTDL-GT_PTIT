#include<bits/stdc++.h>
using namespace std;
int max=100001;
int main()
{
	int t;
	cin>>t;
	int c[100001]={0};
	while(t--)
	{
		int x,y,z;
		int kt=0;
		cin>>x>>y>>z;
		if(z==1)
		{
        	c[x]=c[y]=1;
        	continue;
		}
		if(z==2)
		{
			if(c[x]!=1||c[y]!=1)
			{
				cout<<0<<endl;
				continue;
			}
			cout<<1<<endl;
		}
	}
}