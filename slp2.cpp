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
		int dem=0;
		while(!q.empty()){
			string x=q.front();
			dem++;
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
		cout<<dem<<endl;
		for(auto i:v){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}