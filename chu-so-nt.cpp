#include<bits/stdc++.h>
using namespace std;
char s[101],k[11];
vector<bool> check(101,0);
void vao()
{
	for(int i=1;i<=10;i++)
	{
		check[i]=1;
	}
}
void in(int n)
{
	for(int j=1;j<=n;j++) cout<<s[j];
	cout<<endl;
}
int kt(int n)
{
	if(s[n]=='2') return 0;
	for(int i=1;i<=n;i++)
	{
		if(s[i]=='2') check[2]=0;
		if(s[i]=='3') check[3]=0;
		if(s[i]=='5') check[5]=0;
		if(s[i]=='7') check[7]=0;
	}
	if(check[2]==1) return 0;
	if(check[3]==1) return 0;
	if(check[5]==1) return 0;
	if(check[7]==1) return 0;
	return 1;
}
void chay(int d,int n)
{
	for(int i=1;i<=4;i++)
	{
		s[d]=k[i];
		if(d==n)
		{
			if(kt(n)==1) in(n);
			vao();
		}
		else chay(d+1,n);
	}
}
int main()
{
	int n;
	k[1]='2';
	k[2]='3';
	k[3]='5';
	k[4]='7';
	cin>>n;
	vao();
	int tam=4;
	while(tam<=n)
	{
		chay(1,tam);
		tam++;
	}	
}