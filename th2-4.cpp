#include<bits/stdc++.h>
using namespace std;
vector<int> A[2005];
bool check[2005];
bool ok;
string di;
int m, n, u, v;
void DFS(int a, string s) {
	check[a] = true;
	for (auto b : A[a]) {
		if (!check[b]) {
			if (b == v) {
				ok = true;
				di = s + " " + to_string(b);
			}
			DFS(b, s + " " + to_string(b));
		}
	}
}
void BFS(int a) {
	queue<pair<int, string>>X;
	X.push({ a,to_string(a) });
	while (X.size()) {
		pair<int, string> x = X.front();
		X.pop();
		check[x.first] = true;
		for (auto b : A[x.first]) {
			if (!check[b]) {
				check[b] = true;
				if (b == 1) {
					ok = true;
					di = x.second + " " + to_string(b);
				}
				X.push({ b,x.second + " " + to_string(b)});
			}
		}
	}
}
int main() {
	for (int i = 0; i < 1001; i++)A[i].clear();
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		int a, b; cin >> a >> b;
		A[a].push_back(b);
		A[b].push_back(a);
	}
	for(int i = 0; i < n; i++){
		a[]
	}
	u=1;
	v=2;
	while(v<=n){
		memset(check, false, sizeof(check));
		ok=false;
		di ="";
		DFS(u,to_string(u));
		if (!ok)cout << -1 << endl;
		else cout << di << endl;
		
		memset(check, false, sizeof(check));
		ok=false;
		di ="";
		BFS(v);
		if (!ok) cout << -1 << endl;
		else cout << di << endl;
		
		v++;
	}
	

}