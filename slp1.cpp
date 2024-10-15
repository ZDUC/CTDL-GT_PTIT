#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		queue<string> q;
		vector<string> v;
		q.push("6");
		q.push("8");
		while(!q.empty()){
			string x=q.front();
			q.pop();
			v.push_back(x);
			string z=x+"6";
			if(z.size()>n){
				continue;
			}
			q.push(z);
			z=x+"8";
			if(z.size()>n){
				continue;
			}
			q.push(z);
		}
		for(int i=v.size()-1;i>=0;i--){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}