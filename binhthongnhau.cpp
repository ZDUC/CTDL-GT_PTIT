#include<bits/stdc++.h>
using namespace std;
int max=100001;
int main()
{
	int t;
	cin>>t;
	vector<vector<int>> a(t+2);
	while(t--)
	{
		int x,y,z;
		int kt=0;
		cin>>x>>y>>z;
		if(z==1)
		{
			a[x].push_back(y);
    		a[y].push_back(x);
		}
		else
		{
			for (int i = 1; i <= t; i++) sort(a[i].begin(), a[i].end());
			vector<bool> check(t + 2, 0);
			queue<int> q;
        	q.push(x);
        	check[x] = 1;
        	while (q.size())
        		{
            		int s = q.front();
            		q.pop();
            		for (int i = 0; i < a[s].size(); i++)
            		{
                		int v = a[s][i];
                		if (check[v]==0)
                		{
                    		q.push(v);
                    		check[v] = 1;
                    		if(v==y)
							{
								kt=1;
							} 
                    		
                		}
            		}
        		}
        		if(kt==1) cout<<1<<endl;
        		else cout<<0<<endl;
		}
	}
}