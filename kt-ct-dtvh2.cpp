#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m, x, y, dem=0;
        cin>>n>>m;
        vector<vector<int>> a(n+2);
        int check[n+2]={0};
        while(m--)
        {
        	cin>>x>>y;
        	a[x].push_back(y);
        	a[y].push_back(x);
		}
		for (int i = 1; i <= n; i++) sort(a[i].begin(), a[i].end());
		for (int i = 1; i <= n; i++)
		{
			for(auto j: a[i])
			{
				if(j>i)
				{
					if(check[i]==1&&check[j]==1) 
					{
						dem=1;
					}
					check[j]=1;
				}
			}
		}
		if(dem==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
    }
}