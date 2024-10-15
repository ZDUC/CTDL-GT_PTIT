#include <bits/stdc++.h>
using namespace std;
string remove(string s, int a, int b){
	string tmp="";
	for(int i =0; i < s.length(); i++){
		if(i != a and i != b)
		{
			tmp += s[i];
		}
	}
	return tmp;
}
map<string, int> mp;
void solution(set<string> &v, string s, queue<string> &st1){
	stack<int> st;
	int n = s.length();
	for(int i = 0; i< n; i++)
	{
		if(s[i] == '('){
			st.push(i);
		}
		else if(s[i] == ')')
		{
			int top = st.top(); st.pop();
			string tmp = remove(s, top, i);
			if(mp[tmp] == 0)
			{
				mp[tmp] = 1;
				v.insert(tmp);
				st1.push(tmp);
			}
			
		}
	}	
}

int main(){
	string s;
	cin >> s;
	int n = s.length();
	set<string> v;
	stack<int> st;
	queue<string> st1;
	mp.clear();
	solution(v, s, st1);
	while(!st1.empty())
	{
		string tmp = st1.front(); st1.pop();
		solution(v, tmp, st1);
	}

	for(auto i : v)
	{
		cout << i << endl;
	}
}