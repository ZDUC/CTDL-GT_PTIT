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
		q.push("1");
		int dem=0;
		while(!q.empty()){
			string x=q.front();
			dem++;
			q.pop();
			v.push_back(x);
			string z=x+"0";
			if(dem>n){
				continue;
			}
			q.push(z);
			z=x+"1";
			if(dem>n){
				continue;
			}
			q.push(z);
		}
		for(int i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}