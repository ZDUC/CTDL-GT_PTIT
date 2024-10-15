#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	vector<int> v;
	vector<int> b;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		b.push_back(x);
	}
	int a[k+1];
	for(int i=1;i<=k;i++){
		a[i]=i;
	}
	int dem=0;
	while(1){
		int ds=0;
		v.clear();
		for(int i=1;i<=k;i++){
			v.push_back(b[a[i]-1]);
		}
		for(int i=1;i<v.size();i++){
			if(v[i]<v[i-1]){
				ds=1;
				break;
			}
		}
		if(ds==0) dem++;
		int check=0;
		for(int i=k;i>=1;i--){
			if(a[i]!=n-k+i){
				check=1;
				a[i]++;
				for(int j=i+1;j<=k;j++){
					a[j]=a[j-1]+1;
				}
				break;
			}
		}
		if(check==0) break;
	}
	cout<<dem;
}