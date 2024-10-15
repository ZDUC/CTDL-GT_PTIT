#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	long long n,ds=0;
    	cin>>n;
    	long long m[n+1];
    	for(long long i=0;i<n;i++)
    	{
    		cin>>m[i];
		}
		for(long long i=0;i<n;i++)
    	{
    		for(long long j=i+1;j<n;j++)
    		{
    			if(m[j]==m[i])
    			{
    				ds=1;
    				cout<<m[i]<<endl;
    				break;
				}
			}
			if(ds==1) break;
		}
		if(ds==0) cout<<"NO"<<endl;
	}
}