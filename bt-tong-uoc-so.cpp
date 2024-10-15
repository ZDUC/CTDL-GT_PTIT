#include<bits/stdc++.h>
using namespace std;
int m=1e6+1;
int main()
{
	int a,b,s=0;
	cin>>a>>b;
	vector<int> v(m,1);
	for(int i=2;i<m;i++)
	{
		for(int j=i*2;j<m;j=j+i)
		{
			v[j]=v[j]+i;
		}
	}
	for(int i=a;i<=b;i++)
	{
		if(v[i]>i) s++;
	}
	cout<<s;
}