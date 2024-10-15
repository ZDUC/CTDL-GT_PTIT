#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,x,y;
        cin>>n>>m;
        vector<vector<int>> a(n + 1);
        while(m--)
        {
        	cin>>x>>y;
        	a[x].push_back(y);
		}
		for (int i = 1; i <= n; i++) sort(a[i].begin(), a[i].end());
		for (int i = 1; i <= n; i++)
		{
			cout<<i<<": ";
			for (int j = 0; j < a[i].size(); j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}