#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, u, x, y;
    cin>>n>>m;
    vector<vector<int>> a(n + 2);
    vector<bool> check(n + 2, 0);
    while(m--)
    {
    	cin>>x>>y;
    	a[x].push_back(y);
	}
	for (int i = 1; i <= n; i++) sort(a[i].begin(), a[i].end());
	for (int i = 1; i <= n; i++)
	{
		int dem=0;
		if(check[i]==0)
		{
			dem++;
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
                		check[v] = 1;
            		}
        		}
    		}
		}
		cout<<dem<<endl;
	}
}