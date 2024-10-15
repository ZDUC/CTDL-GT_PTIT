#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		vector<int> v;
		vector<int> ds;
		vector<string> uyen;
		for(int i=0;i<n;i++){
			cin>>x;
			v.push_back(x);
		}
		while(n--){
			string s="";
			s+="[";
			for(int i=0;i<v.size()-1;i++){
				s+=to_string(v[i])+" ";
			}
			s+=to_string(v[v.size()-1])+"]";
			uyen.push_back(s);
			for(int i=0;i<v.size()-1;i++){
				ds.push_back(v[i]+v[i+1]);
			}
			v.clear();
			for(auto i : ds){
				v.push_back(i);
			}
			ds.clear();
		}
		for(int i=uyen.size()-1;i>=0;i--){
			cout<<uyen[i]<<" ";
		}
		cout<<endl;
	}
}