#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    	int n,m,x,y,v,u,p;
    	cin>>n>>m;
    	vector<vector<int>> a(n + 1);
    	while(m--)
    	{
    		cin>>x>>y;
    		a[x].push_back(y);
    		a[y].push_back(x);
		}
		for (int i = 1; i <= n; i++) sort(a[i].begin(), a[i].end());
		cin>>v;
		while(v--)
		{
			int k=0;
			cin>>u>>p;
			stack<int> st;
			int check[n+1]={0};
			st.push(u);
			check[u]=1;
			while(!st.empty())
			{
				u=st.top();
				st.pop();
				for (int i = 0; i < a[u].size(); i++)
            	{
                	int l = a[u][i];
                	if (check[l]==0)
                	{
                    	check[l] = 1;
                    	if(check[p]==1)
                		{
                			k=1;
						}
                    	st.push(u);
                    	st.push(l);
                    	break;
                	}
                	
            	}
			}
			if(k==0) cout<<"NO"<<endl;
			else cout<<"YES"<<endl;
		}
	}
}