#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, u, v=1, x, y;
        cin >> n >> m >> u;
        string s;
        vector<vector<int>> a(n + 1);
        while (m--)
        {
            cin >> x >> y;
            a[x].push_back(y);
            a[y].push_back(x);
        }
        while(v<=n){
        	vector<bool> check(n + 1, 0);
        	queue<pair<int, string>> q;
        	q.push({u, to_string(u) + " "});
        	check[u] = 1;
        	if(v==u){
        		v++;
        		continue;
			}
        	int k=0;
        	while (q.size())
        	{
	            x = q.front().first;
	            s = q.front().second;
	            if (x == v)
	            {
	                k = 1;
	                cout << s << endl;
	                break;
	            }
	            q.pop();
	            for (int i = 0; i < a[x].size(); i++)
	            {
	                int y = a[x][i];
	                if (check[y]==0)
	                {
	                    check[y] = 1;
	                    q.push({y, s + to_string(y) + " "});
	                }
	            }
        	}
        	if (k == 0) cout << "No path" << endl;
        	v++;
		}
        
    }
}