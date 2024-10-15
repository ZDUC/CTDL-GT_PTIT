#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long a,b,dem;
		cin>>a>>b;
		long m[a];
		for(long i=0;i<a;i++)
		{
			cin>>m[i];
			if(m[i]==b) dem=i+1;
		}
		cout<<dem<<endl;
	}
}