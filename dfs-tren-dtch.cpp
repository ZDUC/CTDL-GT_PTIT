#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, u, x, y;
        cin>>n>>m>>u;
        vector<vector<int>> a(n + 1);
        int check[n+1]={0};
        while(m--)
        {
        	cin>>x>>y;
        	a[x].push_back(y);
		}
		for (int i = 1; i <= n; i++) sort(a[i].begin(), a[i].end());
		stack<int>s;
		check[u]=1;
		s.push(u);
    	cout << u << " ";
		while(!s.empty())
		{
			u=s.top();
			s.pop();
			for (int i = 0; i < a[u].size(); i++)
            {
                int v = a[u][i];
                if (check[v]==0)
                {
                    cout << v << " ";
                    check[v] = 1;
                    s.push(u);
                    s.push(v);
                    break;
                }
            }
		}
		cout<<endl;
    }
}