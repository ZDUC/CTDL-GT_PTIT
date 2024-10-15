#include <bits/stdc++.h>
using namespace std;
int main()
{
	int dem=0;
	string s="()";
	string x;	
	cin>>x;
	int n=x.size();
	int a[n];
	for(int i=0;i<x.size();i++){
		if(x[i]=='?') a[i]=0;
		else a[i]=2;
	}
	while(1){
		for(int k=0;k<n;k++){
		 	if(a[k]==2) cout<<x[k];
		 	else cout<<s[a[k]];
		}	
		cout<<endl;
		int check=0;
		for(int i=n-1;i>=0;i--){
			if(a[i]==0){
				check=1;
				a[i]=1;
				for(int j=i+1;j<n;j++){
					if(a[j]==1) a[j]=0;
				}
			}
			if(check==1) break;	
		}
		if(check==0) break;       
	}
}