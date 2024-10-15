#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d=0;
		cin>>n;
		int m[n],ds[n];
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
		}
		int max=m[n-1];
		ds[d]=max;
		for(int i=n-2;i>=0;i--)
		{
			if(m[i]>max) 
			{
				d=d+1;
				max=m[i];
				ds[d]=m[i];
			}
		}
		for(int i=d;i>=0;i--)
		{
			cout<<ds[i]<<" ";
		}
		cout<<endl;
	}
}
		