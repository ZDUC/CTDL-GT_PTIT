#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], m = 0, s = 0, ans = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m = max(m, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == m)
            s++;
        else
            s = 0;
        ans = max(ans, s);
    }
    cout << ans;
}