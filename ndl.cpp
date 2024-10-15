#include<bits/stdc++.h>
using namespace std;
int n,a[30],b[30],c[30][30],m=1e9,ds=0;
vector<int> v;
void ql(int q,vector<int> w)
{
	for(int i=2;i<=n;i++)
	{
		if(!b[i])
		{
			a[q]=i;
			b[i]=b[i]+1;
			ds=ds+c[a[q-1]][i];
			w.push_back(i);
			if(q==n&&m>ds+c[i][1])
			{
				m=ds+c[i][1];
				v=w;
			}
			else if(n>q&&m>ds)
			{
				ql(q+1,w);
			}
			ds=ds-c[a[q-1]][i];
			b[i]=b[i]-1;
			w.pop_back();
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>c[i][j];
		}
	}
	a[1]=1;
	b[1]=1;
	v.push_back(1);
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	ql(2,v);
	cout<<"(";
	for(auto i:v)
	{
		cout<<i<<",";
	}
	cout<<1<<")"<<endl;
	cout<<m;
}