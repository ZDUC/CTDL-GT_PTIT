#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,u,d,x,y,c=0;
		cin>>n>>m>>u>>d;
		vector<vector<int>> v(n+1);
		vector<int> ds;
		int check[n+1]={0};
		while(m--)
		{
			cin>>x>>y;
			v[x].push_back(y);
		}
		for(int i=1;i<=n;i++) sort(v[i].begin(),v[i].end());
		stack<int> st;
		check[u]=1;
		st.push(u);
		while(!st.empty()){
			u=st.top();
			st.pop();
			for(int i=0;i<v[u].size();i++){
				int a=v[u][i];
				if(a==d) c=1;
				if(check[a]==0){
					check[a]=1;
					st.push(u);
					st.push(a);
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