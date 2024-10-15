#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,x;
	long long dsn,dsl;
	cin>>s;
	cin>>x;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='6') s[i]='5';
	}
	for(int i=0;i<x.size();i++)
	{
		if(x[i]=='6') x[i]='5';
	}
	dsn=stoll(s)+stoll(x);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='5') s[i]='6';
	}
	for(int i=0;i<x.size();i++)
	{
		if(x[i]=='5') x[i]='6';
	}
	dsl=stoll(s)+stoll(x);
	cout<<dsn<<" "<<dsl;
}