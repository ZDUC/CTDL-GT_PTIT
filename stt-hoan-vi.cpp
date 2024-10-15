#include <bits/stdc++.h>
using namespace std;
int n,a[20],b[20];
vector<int> v;
void in()
{
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum*10+a[i];
	}
	v.push_back(sum);
}
void quaylui(int i)
{
	int j;
	for(j=1;j<=n;j++)
	{
		if(b[j]==0)
		{
			a[i]=j;b[j]=1;
			if(i==n) in();
			else quaylui(i+1);
			b[j]=0;
		}
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int c[n];
		int tong=0;
		for(int i=0;i<n;i++)
		{
			cin>>c[i];
			tong=tong*10+c[i];
		}
		v.clear();
		quaylui(1);	
		for(int i=0;i<v.size();i++)
		{
			if(v[i]==tong) cout<<i+1<<endl;
		}
	}
}