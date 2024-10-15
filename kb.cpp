#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, u, x, y,dem=0;
        cin>>n>>m;
        vector<vector<int>> a(n + 1);
		int check[n+1]={0};
        while(m--)
        {
        	cin>>x>>y;
        	a[x].push_back(y);
        	a[y].push_back(x);
		}
		for (int i = 1; i <= n; i++) sort(a[i].begin(), a[i].end());
		for (int i = 1; i <= n; i++)
		{
			u=i;
			int tt=0;
			queue<int> q;
			if(check[u]==0){
				check[u]=1;
				q.push(u);
			}
			else continue;
			while(!q.empty()){
				u=q.front();
				q.pop();
				for(int j=0;j<a[u].size();j++){
					int v=a[u][j];
					if(check[v]==0){
						check[v]=1;
						tt++;
						q.push(v);
					}
				}
			}
			dem=max(dem,tt);
			if(dem>n/2) break;
		}
		cout<<dem+1<<endl;
	}
}