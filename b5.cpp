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
	long long a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		cout<<a[i];
		if(i!=n-1) cout<<" ";
	}
	cout<<endl;
	}
}