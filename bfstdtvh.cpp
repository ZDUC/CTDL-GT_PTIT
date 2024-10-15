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
        	a[y].push_back(x);
		}
		for (int i = 1; i <= n; i++) sort(a[i].begin(), a[i].end());
		queue<int> q;
		check[u]=1;
		q.push(u);
		cout<<u<<" ";
		while(!q.empty()){
			u=q.front();
			q.pop();
			for(int i=0;i<a[u].size();i++){
				int v=a[u][i];
				if(check[v]==0){
					check[v]=1;
					cout<<v<<" ";
					q.push(v);
				}
			}
		}
		cout<<endl;
	}
}