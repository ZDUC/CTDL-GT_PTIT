#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int b[n+1];
	for(int i=1;i<=n;i++){
		b[i]=i;
	}
	while(1){
		for(int i=1;i<=n;i++){
			cout<<a[b[i]-1]<<" ";
		}
		cout<<endl;
		int check=0;
		for(int i=n-1;i>=1;i--){
			if(b[i]<b[i+1]){
				check=1;
				sort(b+i+1,b+n+1);
				for(int j=i+1;j<=n;j++){
					if(b[j]>b[i]){
						swap(b[i],b[j]);
						break;
					}
				}
			}
			if(check==1) break;
		}
		if(check==0) break;
	}
}