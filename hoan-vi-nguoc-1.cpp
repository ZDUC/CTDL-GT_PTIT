#include <bits/stdc++.h>
using namespace std;
int n,dem=0,a[20],b[20];
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
	for(j=n;j>=1;j--)
	{
		if(b[j]==0)
		{
			a[i]=j;b[j]=1;
			if(i==n)
			{
				in();
			}
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
		v.clear();
		quaylui(1);	
		for(int i=0;i<v.size()-1;i++)
		{
			cout<<v[i]<<",";
		}
		cout<<v[v.size()-1]<<endl;
	}
}