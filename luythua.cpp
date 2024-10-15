#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
long long power(long long n,long long k){
	if(k==1) return n;
	long long x=power(n,k/2);
	if(k%2==0) return x*x%m;
	else return n*(x*x%m)%m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		if(n==0&&k==0) return 0;
		if(k==0) cout<<1<<endl;
		else cout<<power(n,k)<<endl;
	}
}