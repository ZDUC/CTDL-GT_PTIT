#include <bits/stdc++.h>
using namespace std;
int n,k,c[30];
void in()
{
	for(int i=1;i<=k;i++) cout<<c[i]<<" ";
	cout<<endl;
}
void quaylui(int i)
{
	int j;
	for(j=c[i-1]+1;j<=n-k+i;j++)
	{
		c[i]=j;
		if(i==k) in();
		else quaylui(i+1);
	}
}
int main()
{
	cin>>n>>k;
	quaylui(1);
}