#include <bits/stdc++.h>
using namespace std;
int n,t,k,a[1001];
string s;
set<string> st;
void out()
{
	string tmp="";
	for(int i=1;i<=k;i++)
	{
		tmp=tmp+s[a[i]-1];
	}
	if(tmp!="") st.insert(tmp);
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
		st.clear();
		cin>>s>>k;
		n=s.size();
		bt(1);
		for(auto i:st)
		{
			cout<<i<<endl;
		}
	}           
}