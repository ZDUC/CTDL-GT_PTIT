#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, ans = 1;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 1; i < n; i++)
        if (a[i] > a[i - 1] + k)
            ans++;
    cout << ans;
}