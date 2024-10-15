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
		}
		sort(m,m+a);
		for(int i=a-1;i>=0;i--)
		{
			cout<<m[i]<<" ";
			dem++;
			if(dem==b) break;
		}
		cout<<endl;	
	}
}