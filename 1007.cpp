#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s="AB";
		int a[n]={0};	
		while(1){
			for(int k=0;k<n;k++){
			 	cout<<s[a[k]];
			}	
			cout<<" ";
			int check=0;
			for(int i=n-1;i>=0;i--){
				if(a[i]==0){
					check=1;
					a[i]=1;
					for(int j=i+1;j<n;j++){
						a[j]=0;
					}
				}
				if(check==1) break;	
			}
			if(check==0) break;
		}
		cout<<endl;         
	}
}