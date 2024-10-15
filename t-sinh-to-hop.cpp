#include <bits/stdc++.h>
using namespace std;
int ok=0,n,k,c[30];
void in()
{ 
	for(int i=1;i<=k;i++) cout<<c[i]<<" ";
	cout<<endl;
}
void sinh()
{
	int i=k;
	while(c[i]==n-k+i) i--;
	if(i==0) ok=1;
	else
	{
		c[i]++;
		for(int j=i+1;j<=k;j++) c[j]=c[j-1]+1;
	}
}
int main()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		c[i]=i;
	}
	while(!ok)
	{
		in();
		sinh();
	}
}