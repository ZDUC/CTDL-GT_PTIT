#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,u,x,y;
		cin>>n>>m>>u;
		vector<vector<int>> v(n+1);
		int check[n+1]={0};
		while(m--)
		{
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		for(int i=1;i<=n;i++) sort(v[i].begin(),v[i].end());
		stack<int> st;
		check[u]=1;
		st.push(u);
		cout<<u<<" ";
		while(!st.empty()){
			u=st.top();
			st.pop();
			for(int i=0;i<v[u].size();i++){
				int a=v[u][i];
				if(check[a]==0){
					check[a]=1;
					cout<<a<<" ";
					st.push(u);
					st.push(a);
					break;
				}
			}
		}
		cout<<endl;
	}
}