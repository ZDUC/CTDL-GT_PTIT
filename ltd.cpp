#include<bits/stdc++.h>
using namespace std;
long long m=1e9+7;
long long power(long long n,long long k){
	if(k==0) return 1;
	long long x=power(n,k/2);
	if(k%2==0) return x*x%m;
	else return (n*(x*x%m))%m;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,k=0;
		cin>>n;
		long long m=n;
		while(m!=0){
			k=k*10+m%10;
			m=m/10;
		}
		cout<<power(n,k)<<endl;
	}
}