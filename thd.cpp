#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--){
		long long n,m;
		cin>>n>>m;
		vector<long long> v;
		long long x;
		for(int i=0;i<m+n;i++){
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		for(auto i: v){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}