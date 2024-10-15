#include<bits/stdc++.h>
using namespace std;
int main(){
	while(1){
		int n,k,s,dem=0;
		cin>>n>>k>>s;
		if(n==0&&k==0&s==0) break;
		if(k>n){
			cout<<0<<endl;
			continue;
		}
		int a[k+1];
		for(int i=1;i<=k;i++){
			a[i]=i;
		}
		while(1){
			int tong=0;
			for(int i=1;i<=k;i++){
				tong=tong+a[i];
			}
			if(tong==s) dem++;
			int ok=0;
			for(int i=k;i>=1;i--){
				if(a[i]!=n-k+i){
					ok=1;
					a[i]++;
					for(int j=i+1;j<=k;j++){
						a[j]=a[j-1]+1;
					}
					break;
				}
			}
			if(ok==0) break;
		}
		cout<<dem<<endl;
	}
}