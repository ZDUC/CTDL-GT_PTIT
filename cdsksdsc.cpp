#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.ignore();
	int m=n,k=1;
	vector<vector<int>> v(n+1);
	while(m--){
		string s;
		getline(cin,s);
		string x="";
		for(int i=0;i<s.size();i++){
			if(s[i]!=' '){
				x+=s[i];
			}
			else {
				v[k].push_back(stoi(x));
				x="";
			}
		}
		v[k].push_back(stoi(x));
		k++;
	}
	for(int i=1;i<=n;i++) sort(v[i].begin(),v[i].end());
	for(int i=1;i<=n;i++){
		for(int j=0;j<v[i].size();j++){
			if(v[i][j]>i) cout<<i<<" "<<v[i][j]<<endl;
		}
	}
}