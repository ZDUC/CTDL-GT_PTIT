#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		string x="";
		vector<string> v;
		for(int i=0;i<s.size();i++){
			if(s[i]!=' ') x+=s[i];
			else{
				v.push_back(x);
				x="";
			}
		}
		v.push_back(x);
		for(int i=v.size()-1;i>=0;i--){
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}
