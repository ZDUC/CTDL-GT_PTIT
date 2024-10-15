#include <bits/stdc++.h>
using namespace std;
int n,a[101];
string s[101];
set<string> st;
void in()
{
	string tmp="";
	for(int i=1;i<=n;i++)
	{
		if(a[i]==1)
		{
			tmp=tmp+s[i];
		}	
	}
	if(tmp!="") st.insert(tmp);
}
void bt(int i)
{
	for(int j=0;j<=1;j++)
	{
		a[i]=j;
		if(i==n) in();
		else bt(i+1);
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	bt(1);
	for(auto i:st)
	{
		cout<<i<<endl;
	}
}