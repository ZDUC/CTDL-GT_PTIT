#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int d,c,x,y;
		cin>>d>>c;
		vector<vector<int>> a(d+1);
		while(c--)
		{
			cin>>x>>y;
			a[x].push_back(y);
			a[y].push_back(x);
		}
		for(int i=1;i<=d;i++) sort(a[i].begin(),a[i].end());
		for(int i=1;i<=d;i++)
		{
			cout<<i<<": ";
			for(int j=0;j<a[i].size();j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}