#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long m[n];
	for(long i=0;i<n;i++)
	{
		cin>>m[i];
	}
	int s;
	cin>>s;
	for(long i=0;i<n;i++)
	{
		if(m[i]!=s) cout<<m[i]<<" ";
	}
}