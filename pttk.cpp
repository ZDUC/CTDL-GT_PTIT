#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long m,n,k,x;
		cin>>m>>n>>k;
		set<long long> s;
		for(int i=0;i<m+n;i++){
			cin>>x;
			s.insert(x);
		}
		long long dem=1;
		for(auto i:s){
			if(dem==k){
				cout<<i<<endl;
				break;
			}
			dem++;
		}
	}
}