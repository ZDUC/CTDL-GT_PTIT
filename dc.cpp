#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,dem=0;
		cin>>n>>m;
		vector<int> v;
		vector<int> ds;
		vector<int> dsc;
		int x;
		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
		}
		for(int i=0;i<m;i++){
			cin>>x;
			for(int j=0;j<v.size();j++){
				int s=pow(v[j],x)-pow(x,v[j]);
				if(s>0) ds.push_back(s);
			}
		}
		cout<<ds.size()<<endl;
	}
}