#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int m[101][101]={0};
	int dem=1;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin,s);
		int a;
		for(int i=0;i<s.size();i++)
		{
			if(i==s.size()-1&&s[s.size()-2]==' ')
			{
				a=s[i]-'0';
				if(dem<a) m[dem][a]=1;
				else m[a][dem]=1;
				break;
			}
			if(i==s.size()-1&&s[s.size()-2]!=' ')
			{
				a=(s[s.size()-2]-'0')*10+(s[i]-'0');
				if(dem<a) m[dem][a]=1;
				else m[a][dem]=1;
				break;
			}
			if(s[i]!=' '&&s[i+1]==' ')
			{
				a=s[i]-'0';
				if(dem<a) m[dem][a]=1;
				else m[a][dem]=1;
				i++;
			}
			if(s[i]!=' '&&s[i+1]!=' ')
			{
				a=(s[i]-'0')*10+(s[i+1]-'0');
				if(dem<a) m[dem][a]=1;
				else m[a][dem]=1;
				i=i+2;
			}
		}
		dem++;
	}
	for(int i=1;i<101;i++)
	{
		for(int j=1;j<101;j++)
		{
			if(m[i][j]==1)
			{
				cout<<i<<" "<<j<<endl;
				m[j][i]=0;
			}
		}
	}
}