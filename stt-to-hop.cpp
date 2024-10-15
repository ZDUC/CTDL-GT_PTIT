#include <bits/stdc++.h>
using namespace std;
int n,k,a[30];
vector<int> v;
void in()
{
	int sum=0;
	for(int i=1;i<=k;i++)
	{
		sum=sum*10+a[i];
	}
	v.push_back(sum);
}
void quaylui(int i)
{
	int j;
	for(j=a[i-1]+1;j<=n-k+i;j++)
	{
		a[i]=j;
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
		int c[k];
		int tong=0;
		for(int i=0;i<k;i++)
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