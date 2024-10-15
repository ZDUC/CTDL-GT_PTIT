#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k,ds=0;
		cin>>n>>k;
		long long m[n];
		for(long long i=0;i<n;i++)
		{
			cin>>m[i];
			if(m[i]==k) ds=i+1;
		}
		if(ds!=0) cout<<ds<<endl;
		else cout<<"NO"<<endl;
	}
}