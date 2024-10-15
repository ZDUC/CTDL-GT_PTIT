#include <bits/stdc++.h>
using namespace std;
char tinh(long long n, long long k){
	long long x=pow(2,n-1);
	if(k==x) return 'A'+(n-1);
	if(k<x) return tinh(n-1,k);
	return tinh(n-1,k-x);
	
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		cout<<tinh(n,k)<<endl;
	}
}