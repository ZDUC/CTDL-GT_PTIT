#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m[n+1][n+1];
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=n;j++)
    	{
    		cin>>m[i][j];
		}
	}
	for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=n;j++)
    	{
    		if(m[i][j]!=0) cout<<j<<" ";
		}
		cout<<endl;
	}
}