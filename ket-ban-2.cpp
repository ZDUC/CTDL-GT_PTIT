#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, u, x, y, dem=0;
        cin>>n>>m;
        vector<vector<int>> a(n + 2);
        vector<bool> check(n + 2, 0);
        while(m--)
        {
        	cin>>x>>y;
        	a[x].push_back(y);
        	a[y].push_back(x);
		}
		for (int i = 1; i <= n; i++) sort(a[i].begin(), a[i].end());
		for (int i = 1; i <= n; i++)
		{
			int p=1;
			if(check[i]==0)
			{
				u=i;
				queue<int> q;
        		q.push(u);
        		check[u] = 1;
        		while (q.size())
        		{
            		u = q.front();
            		q.pop();
            		for (int i = 0; i < a[u].size(); i++)
            		{
                		int v = a[u][i];
                		if (check[v]==0)
                		{
                    		q.push(v);
                    		p++;
                    		check[v] = 1;
                		}
            		}
            		dem=max(dem,p);
        		}
			}
		}
		cout<<dem<<endl;
    }
}