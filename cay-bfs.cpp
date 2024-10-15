#include <bits/stdc++.h>
using namespace std;
int V, u, T;
vector<pair<int, int>> vt;
int a[1005][1005];
bool chuaxet[1005];

void init() {
	T = 0;
	cin >> V;
	for(int i = 1; i <= V; i++) {
		for(int j = 1; j <= V; j++) {
			cin >> a[i][j];
		}
	}
	for(int i = 1; i <= V; i++) {
		chuaxet[i] = true;
	}
	cin >> u;
}

void DFS(int i) {
	chuaxet[i] = false;
	if(T == V - 1) 
		return;
	for(int j = 1; j <= V; j++) {
		if(chuaxet[j] && a[i][j]) {
			T++;
			pair<int, int> temp;
			temp.first = i;
			temp.second = j;
			vt.push_back(temp);
			if(T == V - 1)
				return;
			DFS(j);
		}
	}
}

void display() {
	int dem=1;
	for(auto it : vt) {
		if(dem<T) {
		cout << it.first << " " << it.second << endl;dem++;}
	}
}

int main() {
	init();
	DFS(u);
	if(T < V - 1) {
		cout << "Do thi khong lien thong";
	}
	else {
		display();
	}
	return 0;
}