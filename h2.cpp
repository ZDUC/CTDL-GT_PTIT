#include <bits/stdc++.h>
using namespace std;
int n,t,k,a[1001];
void out()
{
	for(int j=1;j<=k;j++) cout<<a[j];
	cout<<" ";
}
void bt(int i)
{
	for(int j=a[i-1]+1;j<=n-k+i;j++)
	{
		a[i]=j;
		if(i==k)
		{
			out();
		}
		else bt(i+1);
	}
}
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		bt(1);
		cout<<endl;
	}           
}