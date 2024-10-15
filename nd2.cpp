#include <bits/stdc++.h>
using namespace std;
bool kt(string s)
{
	int n=s.size();
	stack<char> st;
	for (int i = 0; i < n; i++)
	{
		if(s[i]=='('||s[i]=='['||s[i]=='{') st.push(s[i]);
		else 
		{
			if(st.empty()) return false;
			char in=st.top(), out=s[i];
			if(in=='('&&out==')') st.pop();
			else if(in=='['&&out==']') st.pop();
			else if(in=='{'&&out=='}') st.pop();
			else return 0;
		}
	}
	return st.empty();
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string x;
		cin>>x;
		bool k=kt(x);
		if(k) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}