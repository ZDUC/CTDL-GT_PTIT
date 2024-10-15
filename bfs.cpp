#include<bits/stdc++.h>

using namespace std;
int V,u,check[1000]={0};
int a[1000][1000]={0};


void bfs(int u){
	queue<int> q;
	check[u]=1;
	q.push(u);
    cout << "Duy?t d?nh: " << u << "\n";
	while(q.size()){
		int s=q.front();
		q.pop();
		for(int t=1;t<=V;t++){
			if(a[s][t]==1 && check[t]==0){
				check[t]=1;
				q.push(t);
                cout << "Duy?t d?nh: " << t << "\n";
			}
		}
	}
}
void process(){
	ifstream fpi("matrix1.in");
	fpi>>V;
	for(int i=1;i<=V;i++){
		for(int j=1;j<=V;j++){
			fpi>>a[i][j];
		}
	}
	bfs(1);
	cout<<endl;
}
int main(){
	process();
}