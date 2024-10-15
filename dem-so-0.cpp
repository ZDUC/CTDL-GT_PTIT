#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,check=0;
		cin>>n;
		long long m[n];
		for(long long i=0;i<n;i++)
		{
			cin>>m[i];
			if(m[i]==0) check++;
		}
		cout<<check<<endl;
		
	}
}