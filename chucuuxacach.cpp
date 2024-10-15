#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("in.txt", "r", stdin);
	freopen("out.txt", "w", stdout);
	int n, k, m;
	cin >> n >> k >> m;
	int a[n + 1][n + 1];
	int u, v, x, y;
	map<pair<int, int> , pair<int, int>> mp;
	for(int i = 0; i < m; i++)
	{
		cin >> u >> v >> x >> y;
		mp[{u, v}] = {x, y};
	}
	for(int i = 0 ; i < k ; i++)
	{
		cin >> x >> y;
		a[x][y] = 2;
	}
	cout << mp[{2, 2}];
}