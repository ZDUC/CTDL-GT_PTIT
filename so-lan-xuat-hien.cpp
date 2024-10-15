#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,dem=0;
		cin>>a>>b;
		int m[a];
		for(int i=0;i<a;i++)
		{
			cin>>m[i];
			if(m[i]==b) dem++;
		}
		if(dem==0) cout<<"-1"<<endl;
		else cout<<dem<<endl;
	}
}