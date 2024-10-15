#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int m[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
		}
		sort(m,m+n);
		int ds;
		if(n%2!=0) ds=n/2+1;
		else ds=n/2;
		vector<int> v;
		v.push_back(m[ds-1]);
		swap(m[0],m[1]);
		swap(m[ds-1],m[ds+2]);
		int i;
		for(i=0;i<n;i++)
		{
			if(i==ds+2) continue;
			v.push_back(m[i]);
		}
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}