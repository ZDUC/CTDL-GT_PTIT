#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m[n];
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	sort(m,m+n);
	vector<long long> v;
	long long ds;
	ds=m[0]*m[1];
	v.push_back(ds);
	ds=m[n-2]*m[n-1];
	v.push_back(ds);
	ds=m[0]*m[1]*m[n-1];
	v.push_back(ds);
	ds=m[n-3]*m[n-2]*m[n-1];
	v.push_back(ds);
	sort(v.begin(),v.end());
	cout<<v[v.size()-1];
}