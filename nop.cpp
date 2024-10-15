#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		long long m[9]={0};
		cin>>n;
		string s;
		for(long long i=0;i<n;i++){
			cin>>s;
			for(long long j=0;j<s.size();j++){
				int k=s[j]-'0';
				m[k]=1;
			}
		}
		for(long long i=0;i<10;i++){
			if(m[i]==1) cout<<i<<" ";
		}
		cout<<endl;
	}
}