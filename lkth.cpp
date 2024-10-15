#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,k,m;
	cin>>a>>k;
	int check[1001]={0};
	vector<int> v;
	for(int i=0;i<a;i++){
		cin>>m;
		if(check[m]==0){
			check[m]=1;
			v.push_back(m);
		}
	}
	sort(v.begin(),v.end());
	int s=v.size();
	int b[k+1];
	for(int i=1;i<=k;i++){
		b[i]=i;
	}
	while(1){
		for(int i=1;i<=k;i++){
			cout<<v[b[i]-1]<<" ";
		}
		cout<<endl;
		int c=0;
		for(int i=k;i>=1;i--){
			if(b[i]!=s-k+i){
				c=1;
				b[i]++;
				for(int j=i+1;j<=k;j++){
					b[j]=b[j-1]+1;
				}
				break;
			}
		}
		if(c==0) break;
	}
}