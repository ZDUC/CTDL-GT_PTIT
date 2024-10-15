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
		cout<<m[ds-1]<<endl;
	}
}