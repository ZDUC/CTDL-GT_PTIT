#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int m[n];
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
		}
		for(int i=k;i<n;i++)
		{
			cout<<m[i]<<" ";
		}
		for(int i=0;i<k;i++)
		{
			cout<<m[i]<<" ";
		}
		cout<<endl;
	}
}