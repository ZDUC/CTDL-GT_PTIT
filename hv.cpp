#include<bits/stdc++.h>
using namespace std;
int n,a[20],b[20],m;
set<string> s;
void in()
{
	string x="";
	for(int i=1;i<=n;i++)
	{
		x=x+(to_string(a[i]));
		if(i!=n) x=x+" ";
	} 
	s.insert(x);
}
void quaylui(int i)
{
	int j;
	for(j=1;j<=n;j++)
	{
		if(b[j]==0)
		{
			a[i]=j;b[j]=1;
			if(i==n) in();
			else quaylui(i+1);
			b[j]=0;
		}
	}
}
int main()
{
	cin>>n>>m;
	quaylui(1);
	int dem=0;
	for(auto init: s)
	{
		dem++;
		if(dem%m==0) cout<<init<<endl;
	}
}