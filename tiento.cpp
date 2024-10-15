#include <bits/stdc++.h>
using namespace std;
long long tinh(long long a, long long b,char c)
{
	if(c == '+') return a + b;
	if(c == '-') return a - b;
	if(c == '*') return a * b;
	if(c == '/') return a / b;
	return 0;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		vector<char> v;
		cin >> n;
		string s;
		cin >> s;
		
		for(int i = 0; i < n; i++)
		{
			cin >> c;
			v.push_back(c);
		}
		stack<long long> st;
		for(int i = n - 1; i >= 0; i--)
		{
			if(v[i] != '+' && v[i] != '/' && v[i] != '*' && v[i] != '-')
			{
				if(v[i][])
				long long k = v[i] - '0';
				st.push(k);	
			}
			else
			{
				long long s1 = st.top();st.pop();
				long long s2 = st.top(); st.pop();
				long long tmp = tinh(s1, s2, v[i] );
				st.push(tmp);
			}
			
			
		}
		cout << st.top() << endl;
	}
}