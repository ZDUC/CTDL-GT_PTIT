#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], ans[n];
        stack<int> st;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            while (st.size() && m[st.top()] <= m[a[i]])
                st.pop();
            if (st.empty())
                ans[i] = -1;
            else
                ans[i] = st.top();
            st.push(a[i]);
        }
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << endl;
    }
}