#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long s = 0;
    cin >> n;
    vector<int> a(n), l(n), r(n);
    stack<int> b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        while (!b.empty() && a[i] <= a[b.top()])
            b.pop();
        if (b.empty())
            l[i] = 0;
        else
            l[i] = b.top() + 1;
        b.push(i);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        while (!c.empty() && a[i] <= a[c.top()])
            c.pop();
        if (c.empty())
            r[i] = n - 1;
        else
            r[i] = c.top() - 1;
        c.push(i);
    }
    for (int i = 0; i < n; i++)
        s = max(s, (long long)a[i] * (r[i] - l[i] + 1));
    cout << s;
}