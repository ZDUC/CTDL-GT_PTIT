#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,u,d,x,y,c=0;
		cin>>n>>m>>u>>d;
		vector<vector<int>> a(n+1);
		vector<int> ds;
		int check[n+1]={0};
		while(m--){
			cin>>x>>y;
			a[x].push_back(y);
		}
		for(int i=1;i<=n;i++) sort(a[i].begin(),a[i].end());
		stack<int> st;
		check[u]=1;
		st.push(u);
		while(!st.empty()){
			u=st.top();
			st.pop();
			for(int i=0;i<a[u].size();i++){
				int v=a[u][i];
				if(v==d) c=1;
				if(check[v]==0){
					check[v]=1;
					st.push(u);
					st.push(v);
					break;
				}	
			}
			if(c==1) break;
		}
		if(c==0){
			cout<<-1<<endl;
			continue;
		}
		while(!st.empty()){
			u=st.top();
			st.pop();
			ds.push_back(u);
		}
		for(int i=ds.size()-1;i>=0;i--) cout<<ds[i]<<" ";
		cout<<endl;
	}
}