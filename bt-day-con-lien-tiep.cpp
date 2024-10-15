#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int m[n],a=0,b=0,ds=1;
	for(int i=0;i<n;i++)
	{
		cin>>m[i];
		a=max(a,m[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(m[i]==a) b++;
		else b=0;
		ds=max(ds,b);
	}
	cout<<ds;
}