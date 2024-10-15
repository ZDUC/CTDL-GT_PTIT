#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	vector<int> v;
	string s;
	while(cin>>s){
		if(s=="push"){
			cin>>n;
			v.push_back(n);
		}
		else if(s=="show"){
			if(v.empty()){
				cout<<"empty"<<endl;
			}
			else{
				for(int i:v) cout << i <<" ";
            	cout << endl;
			}
		}
		else{
			v.pop_back();
		}
	}
}