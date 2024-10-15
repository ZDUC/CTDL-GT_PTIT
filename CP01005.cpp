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
		int m[n];
		map<int,int> v;
		for(int i=0;i<n;i++)
		{
			cin>>m[i];
			v[m[i]]++;
		}
		map<int, int>::iterator it;
    	for (it = v.begin(); it != v.end(); it++) 
		{
        	if(it->second%2!=0) cout<<it->first<<endl;
    	}
	}
}