#include <bits/stdc++.h>
using namespace std;
int a[100];
string s;
set<string> st;
void Try(int i, int n, int k)
{
    for(int j = a[i - 1] + 1; j <= n - k + i; j++)
	{
        a[i] = j;
        if(i == k)
        {
            string tmp1 = "";
    		for(int tmp = 1; tmp <= k; tmp++)
    		{
        		tmp1 += s[a[tmp] - 1];
    		}
    		st.insert(tmp1); 
        }
        else
		{
        	Try(i + 1, n ,k);
        }
    }
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
    int k;
    st.clear();
    cin >> s >> k;
    int n = s.length();
    a[0] = 0;
    Try(1, n, k);
    for(auto item : st)
    {
        cout << item << endl;
    }
	}
}
