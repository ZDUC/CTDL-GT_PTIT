#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int a=s.size(),ds=1;
	vector<int> v(a+1,1);
	for(int i=1;i<a;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(s[j]<=s[i])
			{
				v[i]=max(v[i],v[j]+1);
				ds=max(ds,v[i]);
			}
		}
	}
	cout<<ds<<endl;
}