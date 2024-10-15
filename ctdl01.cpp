#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a;
	cin>>a;
	n=a/2;
	int m[n]={0};
	int dem=0;
	while(dem<pow(2,n)){
		dem=dem+1;
		
		for(int i=0;i<n;i++){
			cout<<m[i]<<" ";
		}
		for(int i=n-1;i>=0;i--){
			cout<<m[i]<<" ";
		}
		cout<<endl;
		
		for(int i=n-1;i>=0;i--){
			if(m[i]==0){
				m[i]=1;
				for(int j=i+1;j<n;j++)
				{
					m[j]=0;
				}
				break;
			}
			
		}	
	}		
}