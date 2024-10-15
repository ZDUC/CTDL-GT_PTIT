#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,kq=0;
		cin>>n;
		int m[n],l[n];
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
			l[i]=1;
			for(int j=0;j<i;j++)
			{
				if(m[i]>=m[j]&&l[i]<=l[j])
				{
					l[i]=l[j]+1;
				}
			}
			kq=max(kq,l[i]);
		}
		cout<<n-kq<<endl;
	}
}