#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        queue<string> dq;
        stack<string> ans;
        dq.push("6");
        dq.push("8");
        while (dq.size())
        {
            string k = dq.front();
            ans.push(k);
            dq.pop();
            if (k.size() != n)
            {
                dq.push(k + "6");
                dq.push(k + "8");
            }
        }
        vector<string> v;
        while (ans.size())
        {
            v.push_back(ans.top());
            ans.pop();
        }
        cout<<v.size()<<endl;
        for(int i=v.size()-1;i>=0;i--) cout<<v[i]<<" ";
        cout << endl;
    }
}