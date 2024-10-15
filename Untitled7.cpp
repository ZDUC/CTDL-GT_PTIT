#include<iostream>
#include<string.h>
#include<string>
#include<stack>
#include<vector>
#include<queue>
#include<map>
using namespace std;
vector<int> A[1001];
bool check[1001];
bool ok;
string res;
int m, n, u, v;
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
				if (b == v) {
					ok = true;
					res = x.second + " " + to_string(b);
				}
				X.push({ b,x.second + " " + to_string(b)});
			}
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		for (int i = 0; i < 1001; i++)A[i].clear();
		memset(check, false, sizeof(check));
		ok = false;
		res = "";
		cin >> m >> n >> u >> v;
		for (int i = 0; i < n; i++) {
			int a, b; cin >> a >> b;
			A[a].push_back(b);
			A[b].push_back(a);
		}
		BFS(u);
		if (!ok)cout << -1 << endl;
		else cout << res << endl;
	}
}
#include<iostream>
#include<string.h>
#include<string>
#include<stack>
#include<vector>
#include<queue>
#include<map>
using namespace std;
vector<int> A[1001];
bool check[1001];
bool ok;
string res;
int m, n, u, v;
void DFS(int a, string s) {
	check[a] = true;
	for (auto b : A[a]) {
		if (!check[b]) {
			if (b == v) {
				ok = true;
				res = s + " " + to_string(b);
			}
			DFS(b, s + " " + to_string(b));
		}
	}
}
int main() {
	int t; cin >> t;
	while (t--) {
		for (int i = 0; i < 1001; i++)A[i].clear();
		memset(check, false, sizeof(check));
		ok = false;
		res = "";
		cin >> m >> n >> u >> v;
		for (int i = 0; i < n; i++) {
			int a, b; cin >> a >> b;
			A[a].push_back(b);
			A[b].push_back(a);
		}
		DFS(u,to_string(u));
		if (!ok)cout << -1 << endl;
		else cout << res << endl;
	}
}
void BFS(int u) {
	queue<int> q;
	q.push(u);
	vs[u]= false;
	while(!q.empty()) {
		int v = q.front(); q.pop();
		for(int i = 0 ; i< ver[v].size(); i++) {
			int tmp = ver[v][i];
			if(vs[tmp]) {
				q.push(tmp);
				vs[tmp] = false;
				truoc[tmp] = v; 
			}
		}
	}
}

void duong(int s,int t) {
	if(!truoc[t]) cout<<"-1";
	else {
		stack<int> st;
		int tmp = t;
		while(truoc[t]!=s) {
			t = truoc[t];
			st.push(t);
		}
		cout<<s<<" ";
		while(!st.empty()) {
			cout<<st.top()<<" ";
			st.pop();
		}
		cout<<tmp;
	}
}