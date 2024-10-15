#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,u,x,y,c=0;
		cin>>n>>m;
		vector<vector<int>> v(n+1);
		while(m--)
		{
			cin>>x>>y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		for(int i=1;i<=n;i++) sort(v[i].begin(),v[i].end());
		for(int i=1;i<=n;i++)
		{
			u=i;
			int check[n+1]={0};
			int dem=1;
			stack<int> st;
			check[u]=1;
			st.push(u);
			while(!st.empty()){
				u=st.top();
				st.pop();
				for(int j=0;j<v[u].size();j++){
					int a=v[u][j];
					if(a==i&&st.size()>=2){
						c=1;
						break;
					}
					if(check[a]==0){
						check[a]=1;
						st.push(u);
						st.push(a);
						break;
					}
				}
				if(c==1) break;
			}
			if(c==1) break;
			
		}
		if(c==0) cout<<"NO";
		else cout<<"YES";
		cout<<endl;
	}
}