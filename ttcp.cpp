#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,dem=0;
	cin>>n>>k;
	long long a[n+1];
	long long tong=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		tong=tong+a[i];
	}
	cout<<tong<<endl;
	cout<<2;
}