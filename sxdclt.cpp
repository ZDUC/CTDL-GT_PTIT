#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,st,end,dem=0;
		cin>>n;
		vector<int> v;
		vector<int> ds;
		int x;
		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
			ds.push_back(x);
		}
		sort(v.begin(),v.end());
		int s=v.size();
		for(int i=0;i<s;i++){
			if(v[i]!=ds[i]){
				st=i+1;
				break;
			}
		}
		for(int i=s-1;i>=1;i--){
			if(v[i]!=ds[i]){
				end=i+1;
				break;
			}
		}
		cout<<st<<" "<<end<<endl;
	}
}