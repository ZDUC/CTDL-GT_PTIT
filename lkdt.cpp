#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, u, x, y;
        cin>>n>>m;
        vector<vector<int>> a(n + 1);
        while(m--)
        {
        	cin>>x>>y;
        	a[x].push_back(y);
        	a[y].push_back(x);
		}
		for (int i = 1; i <= n; i++) sort(a[i].begin(), a[i].end());
		for (int i = 1; i <= n; i++)
		{
			int check[n+1]={0};
			check[i]=1;
			u=1;
			queue<int> q;
			if(i==1) u=2;
			check[u]=1;
			q.push(u);
			while(!q.empty()){
				u=q.front();
				q.pop();
				for(int j=0;j<a[u].size();j++){
					int v=a[u][j];
					if(check[v]==0){
						check[v]=1;
						q.push(v);
					}
				}
			}
			for(int k=1;k<=n;k++){
				if(check[k]==0){
					cout<<i<<" ";
					break;
				} 
			}
		}
		cout<<endl;
	}
}