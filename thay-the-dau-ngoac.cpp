#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		cin>>s;
		int i;
		stack<int> st;
		stack<char> kt;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='(')
			{
				st.push(i);
				kt.push(s[i]);
			}
			else if(s[i]==')')
			{
				if(!kt.empty())
				{
					kt.pop();
					s[st.top()]='0';
					s[i]='1';
					st.pop();
				}
			}
		}
		for(i=0;i<s.length();i++)
		{
			if(s[i]==')'||s[i]=='(') cout<<-1;
			else cout<<s[i];
		}
		cout<<"\n";
		while(!st.empty())
		{
			st.pop();
		}
		while(!kt.empty())
		{
			kt.pop();
		}
	}
}