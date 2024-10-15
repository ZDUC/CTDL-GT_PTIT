#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m[n][n];
	vector<int> v;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>m[i][j];
			if(m[i][j]==1) dem++;
		}
		v.push_back(dem);
	}
	for(int i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
		for(int j=0;j<n;j++)
		{
			if(m[i][j]==1)
			{
				cout<<j+1<<" ";
			}
		}
		cout<<endl;
	}
}