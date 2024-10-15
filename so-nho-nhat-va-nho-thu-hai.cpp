#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long a;
		cin>>a;
		long m[a];
		for(long i=0;i<a;i++)
		{
			cin>>m[i];
		}
		sort(m,m+a);
		if(m[0]==m[a-1]) cout<<"-1"<<endl;
		else
		{
			cout<<m[0]<<" "<<m[1]<<endl;
		}
	}
}