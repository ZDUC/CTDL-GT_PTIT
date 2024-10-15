#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin>>n;
		long long check=n/8;
		if(check<1)
		{
			cout<<0<<endl;
			continue;
		}
  		int dem[check];
		long long m[check];
		m[0]=8;
		dem[0]=1;
		for(int i=1;i<check;i++)
		{
			m[i]=m[i-1]+8;
			dem[i]=dem[i-1];
			long long tam=m[i];
			while(tam>0)
			{
				if(tam%10==6||tam%10==8)
				{
					dem[i]=dem[i]+1;
				}
				tam=tam/10;
			}
		}
		cout<<dem[check-1]<<endl;
	}
}