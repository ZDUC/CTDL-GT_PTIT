#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,k,dem=0;
		cin>>n>>k;
		int m[n];
		vector<long long> v;
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
			if(m[i]%k==0)
			{
				dem++;
			}
			if(m[i]%k!=0&&dem!=0)
			{
				v.push_back(dem);
				dem=0;
			}
		}
		sort(v.begin(),v.end());
		if(v.size()==0)
		{
			cout<<-1<<endl;
			continue;
		}
		cout<<v[0]<<endl;	
	}
}