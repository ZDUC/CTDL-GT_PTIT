#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n),r(n);
		stack<int> st;
		int x;
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		for(int i=n-1;i>=0;i--){
			while(!st.empty()&&st.top()<=v[i]){
				st.pop();
			}
			if(st.empty()){
				r[i]=-1;
			}
			else {
				r[i]=st.top();
			}
			st.push(v[i]);
		}
		for(auto i:r){
			cout<<i<<" ";
		}
		cout<<endl;
	}
}