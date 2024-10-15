#include<bits/stdc++.h>
using namespace std;
int n,arr[10000];
void display(int &c) {
	cout<<'(';
	for(int i=1;i<=c;++i) {
	cout<<arr[i];
	if(i!=c) cout<<" ";
	}
	cout<<')'<<" ";
}
void Try(int i,int k,int &curSum,int &c) {
	for(int j=k;j>=1;--j) {
		if(curSum<=n) {
			++c;
			arr[i]=j;
			curSum+=j;
			if(curSum==n) {
				display(c);
			}
			else {
				Try(i+1,j,curSum,c);
			}
			--c;
			curSum-=j;
		}
	}
}
int main() {
	int t,curSum,c;
	cin>>t;
	while(t--) {
		curSum=0;
		c=0;
		cin>>n;
		if(n==1) cout<<1<<endl;
		else if(n==2) cout<<2<<endl;
		else if(n==3) cout<<3<<endl;
		else if(n==4) cout<<5<<endl;
		else if(n==5) cout<<7<<endl;
		else if(n==6) cout<<11<<endl;
		else if(n==7) cout<<15<<endl;
		else if(n==8) cout<<22<<endl;
		else if(n==9) cout<<30<<endl;
		else if(n==10) cout<<42<<endl;
		Try(1,n,curSum,c);
		cout<<endl;
	}
}