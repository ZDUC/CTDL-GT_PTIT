#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k,ds,check=0;
		cin>>n>>k;
		long long m[n];
		for(long long i=0;i<n;i++)
		{
			cin>>m[i];
			if(m[0]>k) check=2;
			if(m[i]>k&&check==0) 
			{
				ds=i;
				check=1;
			}
		}
		if(check==2) cout<<"-1"<<endl;
		else cout<<ds<<endl;
	}
}