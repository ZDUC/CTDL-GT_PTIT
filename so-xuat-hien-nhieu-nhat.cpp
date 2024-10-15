#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int m[n+1],ds=n/2,check=0;
    	map<int,int> mp;
    	for(int i=0;i<n;i++)
    	{
    		cin>>m[i];
    		mp[m[i]]++;
		}
		for(int i=0;i<n;i++)
		{
			if(mp[m[i]]>ds)
			{
				cout<<m[i]<<endl;
				check=1;
				break;
			}
		}
		if(check==1) continue;
		cout<<"NO"<<endl;
	}
}