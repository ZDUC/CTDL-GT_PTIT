#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long m[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
	}
	for(int i=0;i<n;i++)
	{
		long long tam=m[i];
		if(m[i]<0)
		{
			continue;
		}
		cout<<m[i]<<" ";
		m[i]=-1;
		for(int j=i+1;j<n;j++)
		{
			if(m[j]>tam)
			{
				cout<<m[j]<<" ";
				tam=m[j];
				m[j]=-1;
			}
		}
		cout<<endl;
	}
}