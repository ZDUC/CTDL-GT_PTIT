#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    long long a[n + 1], b[m + 1], f[n + 1][m + 1][k + 1] = {}, mod = 1e9 + 9;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        cin >> b[i];
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (a[i] > b[j])
                f[i][j][1] = 1;
            else
                f[i][j][1] = 0;
        }
    }
    for (int p = 1; p <= k; p++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                f[i][j][p] += f[i - 1][j][p] + f[i][j - 1][p] - f[i - 1][j - 1][p];
                if (a[i] > b[j])
                    f[i][j][p] += f[i - 1][j - 1][p - 1];
                f[i][j][p] %= mod;
            }
        }
    }
    while (f[n][m][k] < 0)
        f[n][m][k] += mod;
    cout << f[n][m][k];
}