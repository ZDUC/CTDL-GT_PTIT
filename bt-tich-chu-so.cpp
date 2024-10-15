#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long p,check=0;
		vector<long long> v;
		cin>>p;
		if(p<10) 
		{
			cout<<p<<endl;
			continue;
		}
		int i=9;
		while(p>9)
		{
			if(p%i==0)
			{
				v.push_back(i);
				p=p/i;
			}
			else i--;
			if(i==1)
			{
				cout<<-1<<endl;
				check=1;
				break;
			}
		}
		if(check==1) continue;
		if(p!=1) v.push_back(p);
		for(long long i=v.size()-1;i>=0;i--)
		{
			cout<<v[i];
		}
		cout<<endl;
	}
}