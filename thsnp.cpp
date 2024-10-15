#include <bits/stdc++.h>
using namespace std;
long long cd(string s){
	long long so=0;
	long long p=0;
	for(long long i=s.size()-1;i>=0;i--){
		if(s[i]=='1') so=so+pow(2,p);
		p++;
	}
	return so;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
    	string s,x;
    	cin>>s;
    	cin>>x;
    	long long ds;
    	ds=cd(s)*cd(x);
    	cout<<ds<<endl;
	}
}
