#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		map<int,long long> m;
		vector<int> v;
		int x;
		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
			m[x]++;
		}
		int dem=0;
		for(int i=0;i<v.size();i++){
			int s=k-v[i];
			if(s*2==k) dem+=m[s]*(m[s]-1);
			else dem+=m[v[i]]*m[s];
		}
		cout<<dem<<endl;
	}
}