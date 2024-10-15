#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int m[n+1];
	vector<int> v;
	for(int i=1;i<=n;i++){
		cin>>m[i];
	}
	int a[k+1];
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
	int dem=0;
	while(1){
		int check=0;
		v.clear();
		for(int i=1;i<=k;i++){
			v.push_back(m[a[i]]);
		}
		for(int i=0;i<v.size()-1;i++){
			if(v[i]>v[i+1]){
				check=1;
				break;
			}
		}
		if(check==0) dem++;
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
	cout<<dem;
}