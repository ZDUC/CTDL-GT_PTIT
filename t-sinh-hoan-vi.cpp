#include <bits/stdc++.h>
using namespace std;
int ok=0,n,c[30];
void in()
{ 
	for(int i=1;i<=n;i++) cout<<c[i]<<" ";
	cout<<endl;
}
void sinh()
{
	int i=n-1;
	while(c[i]>c[i+1]) i--;
	if(i==0) ok=1;
	else
	{
		int j=n;
		while(c[j]<c[i]) j--;
		int t=c[i];c[i]=c[j];c[j]=t;
		int a=i+1,b=n;
		while(a<b)
		{
			t= c[a];c[a]=c[b];c[b]=t;
			a++;
			b--;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		c[i]=i;
	}
	while(!ok)
	{
		in();
		sinh();
	}
}