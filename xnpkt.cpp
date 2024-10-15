#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		int c=0;
		for(int i=s.size();i>=0;i--)
		{
			if(s[i]=='0'){
				c=1;
				s[i]='1';
				for(int j=i+1;j<s.size();j++){
					s[j]='0';
				}
				break;
			}
		}
		if(c==1) cout<<s<<endl;
		else{
			for(int i=0;i<s.size();i++){
				cout<<'0';
			}
			cout<<endl;
		}
	}
}