#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,check=0;
		cin>>n;
		int m[n+1],dem[100000]={0};
		for(int i=1;i<=n;i++)
		{
			cin>>m[i];
			dem[m[i]]++;
			for(int j=1;j<i;j++)
			{
				if(m[i]<=m[j])
				{
					check=1;
					break;
				}
			}
			if(dem[m[i]]>=2) check=1;
		}
		if(check==1) cout<<0<<endl;
		if(check==0) cout<<1<<endl;
	}
}