#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n;
		queue<int> q;
		while(n--){
			int l;
			cin>>l;
			if(l==1){
				cout<<q.size()<<endl;
			}
			if(l==2){
				if(!q.empty()) cout<<"NO"<<endl;
				else cout<<"YES"<<endl;
			}
			if(l==3){
				cin>>m;
				q.push(m);
			}
			if(l==4){
				if(!q.empty()){
					q.pop();
				}
			}
			if(l==5){
				if(!q.empty()){
					cout<<q.front()<<endl;;
				}
				else cout<<-1<<endl;
			}
			if(l==6){
				if(!q.empty()){
					cout<<m<<endl;
				}
				else cout<<-1<<endl;
			}
		}
	}
}