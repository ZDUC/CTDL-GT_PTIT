#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long m,n,k;
		cin>>m>>n>>k;
		long long a[m],b[n];
		vector<long long> v;
		for(int i=0;i<m;i++)
		{
			cin>>a[i];
			v.push_back(a[i]);
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
			v.push_back(b[i]);
		}
		sort(v.begin(),v.end());
		cout<<v[k-1]<<endl;
	}
}