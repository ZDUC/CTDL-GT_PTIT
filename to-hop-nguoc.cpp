#include <bits/stdc++.h>
using namespace std;
int n,k,c[30];
vector<int> v;
void in()
{
	for(int i=1;i<=k;i++) v.push_back(c[i]);
}
void quaylui(int i)
{
	int j;
	for(j=c[i-1]+1;j<=n-k+i;j++)
	{
		c[i]=j;
		if(i==k) in();
		else quaylui(i+1);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		v.clear();
		quaylui(1);
		int m=v.size()-k;
		int n=v.size()-1;
		while(n>=k-1)
		{
			for(int i=m;i<=n;i++)
			{
				cout<<v[i]<<" ";
			}
			cout<<endl;
			m=m-k;
			n=n-k;
		}
	}
}